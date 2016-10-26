#include <stdio.h>
#include <stdlib.h>
#include <sndfile.h>

#include <samplerate.h>

#include <unistd.h>

#include <limits.h>

/*

To compile, do: 

 gcc moz_samp2.c -o moz_samp -lsndfile

**samplerate conversion api:

http://www.mega-nerd.com/SRC/index.html

http://stackoverflow.com/questions/10558275/audio-samplerate-converter-using-libsndfile-and-libsamplerate-not-sure-if-using


Reading further, it might be better to adapt the following to do what I want!

Tom says "suede-ocode"

https://github.com/erikd/libsndfile/blob/master/programs/sndfile-convert.c


Alternative strategy is to install sndfile-convert using apt-get. Then use this to get the 8 bit sample conversion (widely regarded to be the best), THEN read that to generate the arduino sample file. Seems better to me!

The proper resampling binary is here: 
~/software/libsamplerate-0.1.9/examples$ ./sndfile-resample -h

*********************************

New version, 25 Oct 2016
The new strategy is to use the sndfile example programs to do the samplerate and bit depth conversion. These use better algorithms, and make for a less noisy result. BUT we still need 
code to read a sample and make a C header file that mozzi can make use of, so that's what this 
new version does. See the script in this util folder that'll do the conversion to the right format, 
then run this to generate the header. Simples!


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

	printf("\nRUNNING WITH THE FOLLOWING OPTIONS\n");

	printf("out_num is\t%d\n",op->out_num);
	printf("out_rate is\t%d\n",op->out_rate);
	printf("threshold is\t%d\n",op->threshold);
	
	printf("infile is\t%s\n",op->ifn);
	printf("wavname os\t%s\n",op->wvn);
	printf("pw is\t%d\n",op->pw);


	printf("\n");

}
 
void printusage(){

	printf("\n");
	printf("OPTIONS FOR moz_samp:\n");
	printf("\n");
	printf("  OPT  Description        Default Vaule\n");
	printf("  d    debug              off\n");
	printf("  i    input file name    \"file.wav\"\n");
	printf("  n    number of samples  %d\n",NSAMP);
	printf("  o    output name        \"thiswav\"\n");
	
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
		case 'o': //Infile needed:
			sprintf(op->wvn,"%s",optarg);
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
        printf("Failed to open the file \"%s\".\n",op->ifn);
        exit(-1);
    }

    /* Print some of the info, and figure out how much data to read. */
    
    
    printopts(op);
    
    
    f = info.frames;
    sr = info.samplerate;
    c = info.channels;
    
    printf("Info for file %s\n",op->ifn);
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

    /* Write the data to filedata.out, as a check */
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
    
  
  
  	/*NOW Start to make the header file */    
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
    
    //work out the number of samples we are going to work with: 
    int nsamp = op->out_num < f ? op->out_num : f;     
    int nperrow=10,cc;
    int outval;

	j=0;
    for(i=0; i < nsamp; i++){
    
    	idx = i * c;
    	outval = 0;
    	//TODO: need other options for combining channels...l only, r only etc...
    	for(cc=0;cc<c;cc++){
    		outval += buf[idx+cc] >> 23;
			printf("chan %d, idx = %d\t outval = %d\n",idx+cc, buf[idx+cc], buf[idx+cc] >> 23);
		}
		outval /= c;
    	
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
		if(j==nperrow){
			j=0;
			fprintf(out,"\n");
		}
		else{
			fprintf(out,"\t");
		}
    
    }
    
    fclose(out);
    
    printopts(op);
    
    if(argc == 1){
    	printf("\nYou ran moz_samp with no options\ndo: \"moz_samp -h\" for help\n\n");

	}
     
    printf("maxmium int size is %d\n",INT_MAX);   
    return 0;
    }
