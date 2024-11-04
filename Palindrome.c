#include <stdio.h>
#include <math.h>
int main()
{
	int N,l=0,t,n,o;
	printf("Enter number: ");
	scanf("%d",&N);
	t=N;
	o=N;
	while(t!=0)
	{
		l++;
		t/=10;
	}
	while(l!=0)
	{
		l--;
		n+=pow(10,l)*(o%10);
		o/=10;
	}
	if(n==N)
	{
		printf("It is a palindrome");
	}
	else
	{
		printf("It is not a palindrome");
	}
	return 0;
}
