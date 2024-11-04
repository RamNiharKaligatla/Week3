#include <stdio.h>
int main()
{
	int N,s=0;
	printf("Enter number: ");
	scanf("%d",&N);
	while(N!=0)
	{
		s+=N%10;
		N/=10;
	}
	printf("Sum of digits is: %d",s);
	return 0;
}
