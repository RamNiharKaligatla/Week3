#include <stdio.h>
int main()
{
	int s=0,a=0,b=1,N;
	scanf("%d",&N);
	while(b<=N-3)
	{
		s=a+b;
		a=b;
		b=s;
	}
	printf("%d",s);
	return 0;
}
