#include <stdio.h>
func1(){
}
func2(){
}
func3(){
}
main()
{
	int no;
	while(1){
		printf("�������?:");
		scanf("%d", &no);
		printf("%d������\n",no);
		switch(no)
			{
				case 1:func1();break;
				case 2:func2();break;
				case 3:func3();break;
				default:
					printf("�߸��Է�");
					 return 0;
			}
	}
}
