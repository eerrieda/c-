#include <stdio.h>
main()
{
	char str1[6] = {'H', 'e', 'l','l','o',};
	char str2[] = "world!";
	int i;
	
	printf("%s\n",str1);
	for(i=0; str2[i]!=NULL; i++)
		printf("%c", str2[i]);
	
	printf("\nstr1의 크기 : %d\n",sizeof(str1));
	printf("str2의 크기 : %d\n",sizeof(str2));
	str2[5] = '~';
	printf("%s\n",str2);
}
