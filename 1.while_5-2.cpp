#include <stdio.h>
main()
{
	int i = 1, n, m, sum = 0;
	
	printf("ù��° ��:");
	scanf("%d", &n);
	printf("������ ��:");
	scanf("%d", &m);
	i = n;
	while(i<=m)
	{
		sum += i;
		i ++;
	}
	printf("%d���� %d������ ���� %d�Դϴ�.\n", n,m,sum);
}
