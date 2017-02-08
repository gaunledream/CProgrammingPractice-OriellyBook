#include<stdio.h>
char line[100]; // line of input
int seven_count;
int data[5];
int three_count;
int index_i;
int main(){
	seven_count = 0;
	three_count = 0;
	printf("Enter 5 numbers: \n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d %d %d %d", &data[0], &data[1], &data[2], &data[3], &data[4]);
	for (index_i = 0; index_i <= 4; ++index_i){
		if (data[index_i] == 3)
			++three_count;
		if (data[index_i]==7)
			++seven_count;
	}
	printf("Threee %d Sevens %d\n", three_count, seven_count);
	return 0;
}