#include <stdio.h>
main()
{
	int n, a ; 
	printf("4�ڸ��� �Է� :");
	scanf("%d", &n);
	
	do
	{
		printf("%d", n % 10);
		n = n /10;
		a++;
	} while( a<4);
}
