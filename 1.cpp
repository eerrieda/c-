#include <stdio.h>
int main()
{
	int i,sum=0, n;
	scanf("%d",&n);
	
	for(i=1;;i++)
	{
		sum+=i;
		if(sum>=n) break;
	}
	printf("%d", i);
}
