#include <stdio.h>

//GLOBAL VARIABLE
int a = 50;
float pi = 3.14;

int add(int a, int b) {
	 printf ("value of a in sum() = %d \n", a);
	 printf ("value of b in sum() = %d \n", b);


	 return a+b;
} 

int main() {
	int a= 10, b = 5, c=0;

	printf ("value of a in the main function = %d\n",a);

	c = add(a,b);

	printf ("sum of a and b = %d \n", c);

	printf ("area = %f \n", pi*a*a);

	return 0;
}



