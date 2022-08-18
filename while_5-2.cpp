#include <stdio.h>
main()
{
	int i = 1, n, m, sum = 0;
	
	printf("첫번째 수:");
	scanf("%d", &n);
	printf("마지막 수:");
	scanf("%d", &m);
	i = n;
	while(i<=m)
	{
		sum += i;
		i ++;
	}
	printf("%d부터 %d까지의 합은 %d입니다.\n", n,m,sum);
}
