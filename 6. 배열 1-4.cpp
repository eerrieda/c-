#include <stdio.h>
main()
{
	int data[6], i;
	 for(i=0; i<6; i++)
	 {
	 	printf("������ �Է�: ");
	 	scanf("%d",&data[i]);
	 }
	 for(i=5; i>=0; i--)
	 {
	 	printf("%d ",data[i]);
	 }
}
