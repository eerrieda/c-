#include <stdio.h>
main()
{
	int SIZE = 3,score[SIZE] ;
	int i, min=100;
	for(i = 0; i < SIZE;i++)
	{
		printf("%d�� �л��� ���α׷��� ������ �Է�: ",i+1);
		scanf("%d",&score[i]);
	}
	for(i= 0; i <SIZE ; i++)
		if(min>score[i])
			min = score[i];
	printf("���� ���� : %d\n",min);
}
