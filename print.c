#include<stdio.h>
#include<stdlib.h>

int verbose = 0; //verbose mode - default false
char *out_file = "print.out"; //output filename
char *program_name; //name of the program for errors
int line_max = 66; //no of lines per page

//dummy routine to handle file
void do_file(char *name){
	printf("Verbose %d Lines %d Input %s Output %s\n", verbose, line_max, name, out_file);
}
//tells user about this programe
void usage(void){
	fprintf(stderr, "Usage is %s [options] [file-list]\n", program_name);
	fprintf(stderr, "Options\n");
	fprintf(stderr," -v	verbose\n");
	fprintf(stderr," -l<number> Number of lines\n");
	fprintf(stderr," -o<name> Set output filename\n");
	exit (8);
}
int main(int argc, char *argv[]){
	//save program name for future use
	program_name = argv[0];
	//loop for each options stop if we run out of arguments or we get it without a dash
	while((argc>1)&&(argv[1][0]=='-')){
		switch(argv[1][1]){
			//argv[1][1] is actual option character
			case 'v'://verbose
				verbose = 1;
				break;
			case 'o': //-o<name> [0] is '-', [1] is 'o' and [2] is file name
				out_file = &argv[1][2];
				break;
			case 'l':
				line_max = atoi(&argv[1][2]);
				break;
			default:
				fprintf(stderr, "Bad option %s\n", argv[1]);
				usage();
		}
		//move the argument list up one and the count down one
		++argv;
		--argc;
	}
	//all optons have been processed, now check if we have more files in the list, if no files, we need to process the standard input stream
	if (argc == 1){
		do_file("print_in");
	}else{
		while(argc>1){
			do_file(argv[1]);
			++argv;
			--argc;
		}
	}
	return 0;
}