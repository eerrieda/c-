#include <stdio.h>
main()
{
	int arr[5], sum = 0, i;
	float avg;
	for (i=0 ; i<5 ; i++)
	{
		printf("%d���� ���� : ", i+1);
		scanf("%d",& arr[i]);
		sum += arr[i];
	}
	avg = sum/5;
	printf("\n������ %d���̸�, ����� %.2f���Դϴ�.", sum, avg); 
}
