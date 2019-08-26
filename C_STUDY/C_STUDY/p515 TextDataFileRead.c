#include<stdio.h>

int main(void)
{
	char str[8];
	int ch;

	FILE* fp = fopen("test.txt", "rt");
	if (fp == NULL)
	{
		puts("읽기 실패\n");
		return -1;
	}

	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);
	fgets(str, sizeof(str), fp);
	printf("%s", str);

	fclose(fp);

	return 0;
}