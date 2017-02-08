#include<stdio.h>
#include<stdlib.h>

int main(){
	char name[100]; //name of the file to use
	FILE *in_file; //file for input
	printf("name? ");
	fgets(name, sizeof(name), stdin);
	in_file = fopen(name, "r");
	printf("%s\n\n", name);
	if(in_file==NULL){
		fprintf(stderr, "could not open file\n");
		exit(8);
	}
	printf("File found\n");
	fclose(in_file);
	return 0;
}