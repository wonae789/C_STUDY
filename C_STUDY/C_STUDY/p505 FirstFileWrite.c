#include<stdio.h>

int main(void)
{
	FILE* fp = fopen("first.txt", "wt");
	if (fp == NULL)
	{
		puts("���Ͽ��� ����\n");
		return -1; // ���������� ����
	}
	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	fputs("hello world my friends", fp);
	fclose(fp); // ��Ʈ�� ����




	return 0;
}