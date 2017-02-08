#include<stdio.h>
const char FILE_NAME[] = "input_text";
#include<stdlib.h>

int main(){
	int count = 0; //no of char seen
	FILE *in_file; //input file
	int ch; //char or EOF flag from input
	
	in_file = fopen(FILE_NAME, "r");
	if(in_file == NULL){
		printf("Cannot open %s\n", FILE_NAME);
		exit(8);
	}
	while(1){
		ch = fgetc(in_file);
		if(ch==EOF)
			break;
		++count;
	}
	printf("No of chars in %s is %d\n", FILE_NAME, count);
	fclose(in_file);
	return 0;
}