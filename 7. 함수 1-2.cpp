#include <stdio.h>

/*ecusive(int count){
	printf("%d ", count);
	if(count>0)
	Recusive(count-1);
	
	printf("*");
}*/
int fact(int num){
	if(num==0)
		return 1;
	else
		return num * fact(num -1);
	//printf("%d! = %d", num, fact(num));
}

main()
{
	int num;
	printf("숫자입력 : ");
	scanf("%d" , &num);
	
	//Recusive(num);
	printf("%d! = %d", num, fact(num));
}
