#include<stdio.h>
#include<string.h> // strlen ���

int main(void)
{

	char a[20] = "aaa";

	printf("%d\n", sizeof(a));
	printf("%d\n ", strlen(a));
	return 0;
} 