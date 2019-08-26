#include<stdio.h>

int main(void)
{
	int ch;
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");

	if (src == NULL || des == NULL)
	{
		puts("���Ͽ��� ����\n");
		return -1;
	}


	while ((ch = fgetc(src)) != EOF)
		fputc(ch, des);


	if (feof(src) != 0)
		puts("���Ϻ��� �Ϸ�\n");
	else
		puts("���Ϻ��� ����\n");

	fclose(src);
	fclose(des);


	return 0;
}