#include <stdio.h>
#include <stdlib.h>
#include <sndfile.h>

#include <samplerate.h>

#include <unistd.h>
#include <limits.h>


/*

To compile, do: 

 gcc moz_samp.c -o moz_samp -lsndfile

**samplerate conversion api:

http://www.mega-nerd.com/SRC/index.html

http://stackoverflow.com/questions/10558275/audio-samplerate-converter-using-libsndfile-and-libsamplerate-not-sure-if-using


Reading further, it might be better to adapt the following to do what I want!

Tom says "suede-ocode"

https://github.com/erikd/libsndfile/blob/master/programs/sndfile-convert.c


Alternative strategy is to install sndfile-convert using apt-get. Then use this to get the 8 bit sample conversion (widely regarded to be the best), THEN read that to generate the arduino sample file. Seems better to me!

The proper resampling binary is here: 
~/software/libsamplerate-0.1.9/examples$ ./sndfile-resample -h



*/


#define NLEN 256
#define NSAMP 32768

/* structure to hold the params */
typedef struct td_opts{

    int out_num;	// number of samples = 2048;//1024;
    int out_rate;	// sample rate= 16384;
    int threshold;	// limiting value for resampling
    char ifn[NLEN]; //infile name
    char wvn[NLEN]; //wav  name (without the '.h')
	int pw;			//flag for whether to print the raw wav values...
}opts;


/* default parameter values */
opts * godefaults(){
	opts *op;
	op = (opts *) malloc(sizeof(opts));
	
    op->out_num = 2048;//1024;
    op->out_rate = NSAMP;
    op->threshold = 0; //if zero, we won't apply  threshold
	
	sprintf(op->ifn,"file.wav");
	sprintf(op->wvn,"thiswav");
	
	op->pw = 0;
	
	return op;
}


void printopts(opts *op){

	printf("out_num is\t%d\n",op->out_num);
	printf("out_rate is\t%d\n",op->out_rate);
	printf("threshold is\t%d\n",op->threshold);
	
	printf("infile is\t%s\n",op->ifn);
	printf("wavname os\t%s\n",op->wvn);
	printf("pw is\t%d\n",op->pw);


}
 
void printusage(){

	printf("\n");
	printf("OPTIONS FOR moz_samp:\n");
	printf("\n");
	printf("  OPT  Description        Default Vaule\n");
	printf("  d    debug              off\n");
	printf("  n    number of samples  %d\n",NSAMP);



}

int mygo(int argc, char **argv, opts* op){

	int c;
	opterr = 0;
	while ((c = getopt (argc, argv, "abdhi:n:o:t:")) != -1){
		switch (c){
		case 'a':
			break;
		case 'b':
			break;
		case 'd':
			op->pw = 1;
			break;
		case 'h':
			printusage();
			exit(0);
			break;	
		case 'i': //Infile needed:
			sprintf(op->ifn,"%s",optarg);
		case 't':
			op->threshold = atoi(optarg);
			break;
		case 'w':
			op->pw = 1;
			break;	
		case '?':
			fprintf(stderr,"INPUT ERROR:\n");
			if (optopt == 'c')
				fprintf (stderr, "Option -%c requires an argument.\n", optopt);
			else if (isprint (optopt))
				fprintf (stderr, "Unknown option `-%c'.\n", optopt);
			else
		  		fprintf (stderr,"Unknown option character `\\x%x'.\n", optopt);
			return 1;
			default:
		abort ();
		}
	}
  
	//  printf ("aflag = %d, bflag = %d, cvalue = %s\n",
	//          aflag, bflag, cvalue);
}



int main(int argc, char **argv)
    {
    SNDFILE *sf;
    SF_INFO info;
    int num_channels;
    int num, num_items;
    int *buf;
    int f,sr,c;
    int i,j;
    
    int idx;
    
    FILE *out;
    FILE *wo;
    
    char fn[NLEN];
    
    /* Set the program options */
    opts * op;
    op = godefaults();
    mygo(argc,argv,op);
    
    
    /* Open the WAV file. */
    info.format = 0;
    sf = sf_open(op->ifn,SFM_READ,&info);
    if (sf == NULL){
        printf("Failed to open the file \"file.wav\".\n");
        exit(-1);
    }

    /* Print some of the info, and figure out how much data to read. */
    f = info.frames;
    sr = info.samplerate;
    c = info.channels;
    
    printf("frames=%d\n",f);
    printf("samplerate=%d, outrate=%d\n",sr,op->out_rate);
    printf("channels=%d\n",c);
    num_items = f*c;
    printf("num_items=%d\n",num_items);
    
    /* Allocate space for the data to be read, then read it. */
    buf = (int *) malloc(num_items*sizeof(int));
    num = sf_read_int(sf,buf,num_items);
    sf_close(sf);
    printf("Read %d items\n",num);

    /* Write the data to filedata.out. */
    out = fopen("filedata.out","w");
    if(op->pw){
		for (i = 0; i < num; i += c)
		    {
		    for (j = 0; j < c; ++j)
		        fprintf(out,"%d ",buf[i+j]);
		    fprintf(out,"\n");
		    }
		fclose(out);
    }
    
    /* 32 bit stereo to 8-bit mono */
    //16384 samplerate needed
    
    //4294967296
    
    float step = (float) sr / (float) op->out_rate;
    
    int outval;
    
    sprintf(fn,"%s.h",op->wvn);
    out = fopen(fn,"w");
        
    /* Header info.... */
    fprintf(out,"#ifndef %s_H_\n",op->wvn);
    fprintf(out,"#define %s_H_\n",op->wvn);
    fprintf(out,"\n"); 
    fprintf(out,"#include \"Arduino.h\"\n");
    fprintf(out,"#include <avr/pgmspace.h>\n");
    fprintf(out,"\n");
    fprintf(out,"#define %s_NUM_CELLS 1024\n",op->wvn);
    fprintf(out,"#define %s_SAMPLERATE %d\n",op->wvn,NSAMP);
 
    fprintf(out,"const int8_t __attribute__((progmem)) %s_DATA [] = {\n",op->wvn);
    
    for(i=0; i < op->out_num; i++){
    
    	//let's print out 10 numbers per row: 
    	for(j=0;j<10;j++){
    		//Get the index
    		idx = (float) (i*step*c); //truncates 
    		outval = (float) buf[idx] * 64 / 2147483648;		
    		printf("idx = %d\t inval = %d\t outidx = %d\t outval = %d\n",idx,buf[idx],i,outval);
    		fprintf(out,"%d",outval);
    		
    		if(i<(op->out_num)){
    			fprintf(out,", /* %04d */\n",i);
    		}
    		else{
    			fprintf(out,"};\n\n#endif /* %s_H_ */",op->wvn);
    		}
    		
    		if(i==op->out_num)
    			break;
    		i++;
    	}
    
    }
    
    fclose(out);
    
    printopts(op);
    
    if(argc == 1){
    	printf("\nYou ran moz_samp with no options\ndo: \"moz_samp -h\" for help\n\n");

	}
     
     
        
    return 0;
    }
