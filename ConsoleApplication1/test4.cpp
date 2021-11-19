#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

#include <stdio.h>
#include <string.h>

bool f_c()
{
	char s[256];//最後に '\0' (Null文字) が入るので 255 文字まで受け取れる
	if (scanf("%s", s) == 1) {
		printf("入力されたデータは %s です。\n", s);
		return true;
	}
	else {
		printf("入力にエラーがありました。\n");
		return false;
	}
}
bool f_cpp()
{
	std::string s;
	if (std::cin >> s) {
		std::cout << "入力されたデータは " << s << " です。\n";
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
