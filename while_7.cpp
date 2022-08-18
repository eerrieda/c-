#include <stdio.h>
main()
{
	int dan, n = 9, sum = 0;
	printf("¸î ´Ü?");
	scanf("%d", &dan);
	
	while(n>0)
	{
		printf("%d * %d = %d\n", dan,n, n*dan);
		n--;
	}
}
