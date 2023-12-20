#include<stdio.h>
int main()
{
	int a= 5,b= 7,c;
	printf ("the original value is %d,%d", a,b);
	c=a;
	a=b;
	b=c;

	printf ( "the value after swapping is %d,%d",a,c);
	return 0;
}
