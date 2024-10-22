#include <stdio.h>
int main()
{
	int N,c=0;
	scanf("%d",&N);
	while(N!=0)
	{
		c++;
		N/=10;
	}
	printf("%d",c);
	return 0;
}
