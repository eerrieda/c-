#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int answer, cnt, guess;
	srand(time(NULL));
	answer = (rand() % 100) +1 ; 
	
	do
	{
		printf("1���� 100���� ���ڸ� ���纸����>> ");
		scanf("%d", &guess);
		cnt++;
		
		if( guess < answer)
		printf("������ ���ڰ� �����ϴ�.\n");
		else if( guess > answer)
		printf("������ ���ڰ� �����ϴ�.\n");
	}while(guess != answer);
	printf("�����մϴ� ! ������ %d�̰�, �õ� Ƚ�� = %d\n", answer, cnt);
}
