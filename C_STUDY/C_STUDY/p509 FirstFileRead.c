#include<stdio.h>

int main(void)
{

	FILE* fp = fopen("first.txt", "rt");
	if (fp == NULL)
	{
		puts("파일오픈 실패");
		return -1;
	}
	int i,ch;
	for (i = 0; i < 10; i++)
	{
		ch = getc(fp);
		printf("%c", ch);
	}
	fclose(fp);



	return 0;
}