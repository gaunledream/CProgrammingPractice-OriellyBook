#include<string.h>
#include<stdio.h>
char line[100]; /*line we are looking at */
int main(){
		printf("Enter a line: ");
		fgets(line, sizeof(line), stdin);
		printf("the length of the line is %d\n", (int)strlen(line));
		return 0;
	}