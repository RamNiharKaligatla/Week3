#include <stdio.h>
int main()
{
	int c=1,N,i;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		c*=i;
	}
	printf("%d",c);
	return 0;
}
