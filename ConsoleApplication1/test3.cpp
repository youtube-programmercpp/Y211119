#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
bool f_c()
{
	char n;
	if (scanf("%hhd", &n) == 1) {
		printf("入力されたデータは %d です。\n", n);
		return true;
	}
	else {
		printf("入力にエラーがありました。\n");
		return false;
	}
}
bool f_cpp()
{
	char n;
	if (std::cin >> n) {
		std::cout << "入力されたデータは " << n << " です。\n";
		return true;
	}
	else {
		std::cout << "入力にエラーがありました。\n";
		return false;
	}
}
int main()
{
	if (f_c()) {
		(void)f_cpp();
	}
}
