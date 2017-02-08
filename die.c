#include<stdio.h>
#include<stdlib.h>

#define DIE \
	fprintf(stderr, "Fatal error: abort\n"); exit(8);
	
int main(){
	printf("hi start");

	int value;
	value = 1;
	if (value < 0)
		//printf("hi");
		DIE;
	printf("We did not die\n");
	return 0;
}