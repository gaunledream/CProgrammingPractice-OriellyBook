#include <stdio.h>
#include <string.h>

char first[100];
char last[100];

char full[200];

int main(){
		printf("Enter first name: ");
		fgets(first, sizeof(first), stdin);
		
		printf("Enter last name: ");
		fgets(last, sizeof(last), stdin);
		/* trim first name */
		first[strlen(first)-1] = '\0';
		
		strcpy(full, first);
		strcat(full, " ");
		strcat(full, last);
		printf("The name is %s\n", full);
		return 0;
	}