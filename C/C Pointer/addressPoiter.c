#include <stdio.h>
int main(){
	int x = 4;
	printf("x is stored at %p\n", &x);
	
	int *address_of_x = &x;
	printf("address_of_x is stored at %p\n", address_of_x);
	printf("value_of_x is stored at %p\n", *address_of_x);
	
	*address_of_x = 9;
	printf("address_of_x is stored at %p\n", address_of_x);
	printf("value_of_x is stored at %p\n", *address_of_x);
	return 0;
}