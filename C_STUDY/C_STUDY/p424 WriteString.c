#include<stdio.h>

int main(void)
{

	char* str = "asdfasdf";
	printf("1.puts 함수 테스트\n");

	puts(str);
	puts("aefefefefef"); // puts 함수는 자동개행이 된다.

	printf("2.fputs 함수 테스트\n");

	fputs(str, stdout); // puts 함수는 자동개행이 안되고, 두번재 인자를 통해서 출력 대상을 결정할수 있다.
	printf("\n");
	fputs("dkdkdkdkdkdk", stdout);

	printf("\n");



}