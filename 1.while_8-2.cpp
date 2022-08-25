#include <stdio.h>
main()
{
	int count = 1 ;
	
	while ( 1 )
	{
		printf("%d ", count);
		count+=2;
		
		if(count > 10) break;
	}
}
