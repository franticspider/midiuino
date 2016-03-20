#include <stdio.h>
#include <stdlib.h>
#include <sndfile.h>

// gcc makesamp.c -o makesamp -lsndfile


int main()
    {
    SNDFILE *sf;
    SF_INFO info;
    int num_channels;
    int num, num_items;
    int *buf;
    int f,sr,c;
    int i,j;
    
    int idx;
    int out_num = 2048;//1024;
    int out_rate = 16384;
    
    FILE *out;
    
    /* Open the WAV file. */
    info.format = 0;
    sf = sf_open("file.wav",SFM_READ,&info);
    if (sf == NULL)
        {
        printf("Failed to open the file \"file.wav\".\n");
        exit(-1);
        }
    /* Print some of the info, and figure out how much data to read. */
    f = info.frames;
    sr = info.samplerate;
    c = info.channels;
    printf("frames=%d\n",f);
    printf("samplerate=%d, outrate=%d\n",sr,out_rate);
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
    for (i = 0; i < num; i += c)
        {
        for (j = 0; j < c; ++j)
            fprintf(out,"%d ",buf[i+j]);
        fprintf(out,"\n");
        }
    fclose(out);
    
    /* 32 bit stereo to 8-bit mono */
    //16384 samplerate needed
    
    //4294967296
    
    float step = (float) sr / (float) out_rate;
    
    int outval;
    
    out = fopen("thiswav.h","w");
    
    char wavname[] = "mywav";
    
    /* Header info.... */
    fprintf(out,"#ifndef %s_H_\n",wavname);
    fprintf(out,"#define %s_H_\n",wavname);
    fprintf(out,"\n"); 
    fprintf(out,"#include \"Arduino.h\"\n");
    fprintf(out,"#include <avr/pgmspace.h>\n");
    fprintf(out,"\n");
    fprintf(out,"#define %s_NUM_CELLS 1024\n",wavname);
    fprintf(out,"#define %s_SAMPLERATE 16384\n",wavname);
 
    fprintf(out,"const int8_t __attribute__((progmem)) %s_DATA [] = {\n",wavname);
    
    for(i=0; i < out_num; i++){
    
    	//let's print out 10 numbers per row: 
    	for(j=0;j<10;j++){
    		//Get the index
    		idx = (float) (i*step*c); //truncates 
    		outval = (float) buf[idx] * 64 / 2147483648;		
    		printf("idx = %d\t inval = %d\t outidx = %d\t outval = %d\n",idx,buf[idx],i,outval);
    		fprintf(out,"%d",outval);
    		
    		if(i<(out_num)){
    			fprintf(out,", /* %04d */\n",i);
    		}
    		else{
    			fprintf(out,"};\n\n#endif /* %s_H_ */",wavname);
    		}
    		
    		if(i==out_num)
    			break;
    		i++;
    	}
    
    }
    
    fclose(out);
    
        
    return 0;
    }
