#include <stdio.h>

int main(){

	int a = 10;
	printf("a = %d \n",a);

	unsigned int b = 20;
	printf("b = %u \n",b);

	int c = 024;
	printf("c = %o \n", c);
	printf(" c (uppercase octal) = %O \n", c);

	int d = 0xF1;
	printf("d = %x \n", d);
	printf("d (uppercase hexadecimal) = %X \n", d);

	float e = 3.423643f;
	printf("f (decimal floating point: lowercase) = %f \n", e);

	float f = 1.2236F;
	printf("f (decimal floating point: uppercase) = %F \n", f);

	float g = 3.9265e+2;
	printf ("g (scientific notation: lowercase) = %e \n", g);
        printf ("g (scientific notation: uppercase) = %E \n", g);

	char stu1_gender = 'm';
	char stu2_gender = 'f';
	printf("student 1 gender = %c \n student 2 gender = %c \n", stu1_gender, stu2_gender);

	char* uni_name = "University of Colombo School of Computing";
	printf("University = %s \n", uni_name);

}	
