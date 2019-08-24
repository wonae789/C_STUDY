#include<stdio.h>

int main(void) // 에코프로그램
{
	int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		putchar(ch);
	}

	return 0;
}