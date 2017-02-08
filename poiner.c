#include<stdio.h>

int main(){
	int a = 1;
	int * a_ptr = &a;
	printf("a_ptr holds a's address: 0x%-10p\n",a_ptr);
	printf("a_ptr's own address is: 0x%-10p\n",&a_ptr);
	return 0;
}