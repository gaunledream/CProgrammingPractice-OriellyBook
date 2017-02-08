#include<stdio.h>

#define MAX 10//MAX=10 should be MAX 10
int main(){
	int counter;
	for (counter = MAX; counter > 0; --counter)
		printf("hi there\n");
	return 0;
}