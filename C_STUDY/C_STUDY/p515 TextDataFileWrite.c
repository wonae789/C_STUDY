#include<stdio.h>

int main(void)
{
	FILE* fp = fopen("test.txt", "wt");
	if (fp == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}

	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	fputs("55555\n",fp);
	fputs("666666\n",fp);
	fclose(fp);

	return 0;
}