#include<stdio.h>
#include<stdlib.h>
#define MAX_NUMBERS 1000 //max numbers in file
const char DATA_FILE[] = "numbers.dat"; //file with numbers

int data[MAX_NUMBERS]; //array of numbers to search
int max_count;
int main(){
	FILE *in_file;
	int middle;
	int low, high;
	int search;
	char line[80];
	
	in_file = fopen(DATA_FILE, "r");
	if (in_file == NULL) {
		fprintf(stderr, "Error:Unable to open %s\n", DATA_FILE);
		exit (8);
	}
	max_count = 0;
	while(1){
		if(fgets(line, sizeof(line), in_file)==NULL)
			break;
		sscanf(line, "%d", &data[max_count]);
		++max_count;
	}
	while(1){
		printf("Enter number to search for or -1 to quit:");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &search);
		if (search == -1)
			break;
		low = 0;
		high = max_count;
		while(1){
			middle = (low + high)/2;
			
			if (data[middle]==search){
				printf("Found at index %d\n", middle);
				break;
			}
			if(low == high){
				printf("Not found\n");
				break;
			}
			if(data[middle]<search)
				low = middle+1;
			else
				high = middle - 1;
		}
	}
	return 0;
}