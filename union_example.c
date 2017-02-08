/*
*Define a variable to hold an int or 
* a real number (but not both)
*/
#include <stdio.h>
union value{
	long int i_value; //the real number
	float f_value; //the floating point number
}data;
int i;
float f;
int main(){
	data.f_value = 6.0;
	data.i_value = 3; //data.f_value operwritten
	i = data.i_value; //legal
	printf("first i is: %d\n", i);
	f = data.f_value; //not legal, generate unexpected results
	printf("first f is: %f\n", f);
	data.f_value = 5.4; //put something in f_value, clobber i_value
	i = data.i_value;//not legal, will generate unexpected results
	printf("second i is: %d\n", i);
	return 0;
}