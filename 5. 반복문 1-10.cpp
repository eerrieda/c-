#include <stdio.h>
main()
{
	int n, i , jumsu;
	int max = 0, min = 100;
	printf("�л����� �Է��ϼ���: ");
	scanf("%d", &n);
	printf("������ �Է��ϼ���(0~100) : ");
	
	for(i = 0; i < n ; i++)
	{
		scanf("%d", &jumsu);
		if(jumsu>max) max = jumsu;
		else if(jumsu<min) min = jumsu;
	}
	printf("1���� %d��, ����� %d��\n", max, min);
}
