#include <stdio.h>
main()
{
	char str1[6] = {'H', 'e', 'l','l','o',};
	char str2[] = "world!";
	int i;
	
	printf("%s\n",str1);
	for(i=0; str2[i]!=NULL; i++)
		printf("%c", str2[i]);
	
	printf("\nstr1�� ũ�� : %d\n",sizeof(str1));
	printf("str2�� ũ�� : %d\n",sizeof(str2));
	str2[5] = '~';
	printf("%s\n",str2);
}
