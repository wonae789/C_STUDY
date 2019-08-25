#include<stdio.h>	


int main(void)
{

	char str[7];

	int i;
	for (i = 0; i < 3; i++)
	{
		fgets(str,sizeof(str) , stdin); // 2번째인자 : 길이만큼만저장(null크기 포함해서) , 3번째인자, 출력대상은 키보드
		printf("Read %d : %s\n", i + 1, str);
	}


	return 0;
}