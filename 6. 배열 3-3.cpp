#include <stdio.h>
main()
{
	int a[4][2];
	int i,j;
	int tot;
	double avg;

	for(i=0;i<4;i++)
	{
		printf("%d�� �л��� ����, C��� ���� �Է� : ", i+1);
			for(j=0;j<2;j++)
				scanf("%d", &a[i][j]);
	}
	for(i=0; i<4; i++)
	{
		tot = 0;
		for(j=0; j<2; j++)
			tot +=a[i][j] ;
		avg = tot/2.0 ;
		printf("%d�� �л��� ", i+1);
		printf("���� : %3d, ���: %.2f\n", tot, avg);
	}
}
