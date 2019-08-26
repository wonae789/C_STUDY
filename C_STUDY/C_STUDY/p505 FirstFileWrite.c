#include<stdio.h>

int main(void)
{
	FILE* fp = fopen("first.txt", "wt");
	if (fp == NULL)
	{
		puts("파일오픈 실패\n");
		return -1; // 비정상종료 위해
	}
	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	fputs("hello world my friends", fp);
	fclose(fp); // 스트림 종료




	return 0;
}