#include<stdio.h>
#include<string.h> // strlen 사용


typedef enum syllable
{
	mon = 1, thu = 2
}syllable;

int main(void)
{
	syllable to;
	int i = mon;
	printf("%d", to);

	return 0;
}



//int main(void)
//{
//
//	char a[20] = "aaa";
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n ", strlen(a));
//	return 0;
//}   

//int main(void)
//{
//
//	char str[3];
//	printf("정수 입력 : ");
//	scanf("%s", str);
//
//	printf("%s", str);
//
//	return 0;
//}