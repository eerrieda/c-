#include <stdio.h>
main()
{
	char str[6] = "apple";
	int i = 0;
	printf("�� ���ھ� ���\n");
	while(i<sizeof(str))
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n\n���ڿ��� �Ѳ����� ���\n");
	printf("%s",str);
}
