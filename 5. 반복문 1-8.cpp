#include <stdio.h>
main()
{
	int num ;
	while(1)
	{
		printf("�����Է� : ");
		scanf("%d", &num);
		if(num<0)break;
		if(num == 0) continue;
		if(num % 2 ==0)
			printf("¦��\n");
		else
			printf("Ȧ��\n");
	}
}
