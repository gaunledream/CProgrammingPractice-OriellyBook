#include <stdio.h>
char line[1000]; //line of data from the input
int result; //the result of calculation
char operator; //operator the user specifies
int value;

int main(){
	result = 0; //intialize result
	//loop forever
	while(1){
		printf("Result: %d\n", result);
		printf("Enter operator and number: ");
		fgets(line, sizeof(line),stdin);
		sscanf(line, "%c %d", &operator, &value);
		if ((operator == 'q') || (operator == 'Q'))
			break;
		if (operator == '+'){
			result += value;
		} else if (operator == '-'){
			result -= value;
		} else if (operator == '*'){
			result *= value;
		} else if (operator == '/'){
			if (value == 0){
				printf("Error: divide by zero\n");
				printf(" operation ignored\n");
			} else {
				result /= value;
			}
		}
		else{
			printf("Unknown operator %c\n", operator);
		}
	}
	return 0;
}