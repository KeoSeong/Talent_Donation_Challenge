#include <stdio.h>

int lewis(int a, int b);
int scarlet(int a);
int main(void)
{
	int number0 = 0; 
	int number1 = 0;
	printf ("hello git!\n");
	printf ("first modify\n");
	printf ("why without scarlet doing noting?\n");
	number0 = scarlet(3);
	number1 = lewis(3,5);
	printf ("%d %d\n", number0, number1);
	return 0;
}

int scarlet(int a){
	return a;
}

int lewis(int a, int b)
{
	return a+b;
}
