#include <stdio.h>
main()
{
	int n, a ; 
	printf("4자리수 입력 :");
	scanf("%d", &n);
	
	do
	{
		printf("%d", n % 10);
		n = n /10;
	} while(n);
}
