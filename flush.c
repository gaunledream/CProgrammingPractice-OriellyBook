//printf normally buffers, so to flush the output immediately, we use fflush here
#include<stdio.h>
int main(){
	int i, j;
	i = 1; 
	j = 0;
	printf("Starting \n");
	fflush(stdout);
	printf("Before divide....");
	fflush(stdout);
	i = i/j;//divide by zero error
	printf("After\n");
	fflush(stdout);
	return 0;
}