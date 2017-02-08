#include<stdio.h>
#include<memory.h>//gets memset definition

#define X_SIZE 50
#define Y_SIZE 30

int matrix[X_SIZE][Y_SIZE];

void init_matrix(void){
	memset(matrix, 1, sizeof(matrix));
}
int main(){
	init_matrix();
	int i, j;
	for (i = 0; i < X_SIZE; i++){
		for(j = 0; j < Y_SIZE; j++)
			printf("**%d**", matrix[i][j]);
		printf("\n");
	}
	return 0;
}