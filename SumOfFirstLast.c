#include <stdio.h>
int main()
{
	int N,a=0,b=0;
	printf("Enter number: ");
	scanf("%d",&N);
	a+=N%10;
	while(N!=0)
	{
		if((N/10)==0)
		{
			b+=N%10;
		}
		N/=10;
	}
	printf("Sum of first and last digit is: %d",a+b);
	return 0;
}
