#include<stdio.h>

int main(void)
{
	char str[20];
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");

	if (src == NULL || des == NULL)
	{
		puts("파일오픈 실패\n");
		return -1;
	}


	while (fgets(str,sizeof(src),src)!=NULL)
		fputs(str, des);


	if (feof(src) != 0)
		puts("파일복사 완료\n");
	else
		puts("파일복사 실패\n");

	fclose(src);
	fclose(des);


	return 0;
}