#include<stdio.h>

int main(void)
{

	char* str = "asdfasdf";
	printf("1.puts �Լ� �׽�Ʈ\n");

	puts(str);
	puts("aefefefefef"); // puts �Լ��� �ڵ������� �ȴ�.

	printf("2.fputs �Լ� �׽�Ʈ\n");

	fputs(str, stdout); // puts �Լ��� �ڵ������� �ȵǰ�, �ι��� ���ڸ� ���ؼ� ��� ����� �����Ҽ� �ִ�.
	printf("\n");
	fputs("dkdkdkdkdkdk", stdout);

	printf("\n");



}