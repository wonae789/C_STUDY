#include<stdio.h>

int main(void)
{
	char str[20];
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");

	if (src == NULL || des == NULL)
	{
		puts("���Ͽ��� ����\n");
		return -1;
	}


	while (fgets(str,sizeof(src),src)!=NULL)
		fputs(str, des);


	if (feof(src) != 0)
		puts("���Ϻ��� �Ϸ�\n");
	else
		puts("���Ϻ��� ����\n");

	fclose(src);
	fclose(des);


	return 0;
}