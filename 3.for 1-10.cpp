#include <stdio.h>
main()
{
	int i , dan ;
	printf("���ϴ� ����?");
	scanf("%d",&dan);
	printf("\n*** %d�� ***\n", dan);
	for(i=1; i<10; i++)
	{
		printf("%d * %d = %d\n", dan, i , i * dan);
	}
}
