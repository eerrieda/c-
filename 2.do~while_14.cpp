#include <stdio.h>
main()
{
	int sum, n ;
	do
	{
		printf("���� �Է�(0�̸� ����) :");
		scanf("%d", &n);
		sum +=n; 
	}while(n!=0);
	printf("�� : %d", sum);
}
