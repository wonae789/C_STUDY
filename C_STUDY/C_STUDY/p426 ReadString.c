#include<stdio.h>	


int main(void)
{

	char str[7];

	int i;
	for (i = 0; i < 3; i++)
	{
		fgets(str,sizeof(str) , stdin); // 2��°���� : ���̸�ŭ������(nullũ�� �����ؼ�) , 3��°����, ��´���� Ű����
		printf("Read %d : %s\n", i + 1, str);
	}


	return 0;
}