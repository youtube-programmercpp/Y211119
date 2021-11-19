#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

#include <stdio.h>
#include <string.h>

void f_c_2()
{
	for (;;) {
		char s[4];
		if (fgets(s, sizeof s, stdin)) {
			const size_t n = strlen(s);
			if (s[n - 1] == '\n') {
				s[n - 1] = '\0';
				printf("%s", s);
				break;
			}
			else
				printf("%s", s);
		}
		else
			break;
	}
}

bool f_c()
{
	char s[4];
	if (fgets(s, sizeof s, stdin)) {
		//s[0] = 't'
		//s[1] = 'e'
		//s[2] = 's'
		//s[3] = '\0'
		const size_t n = strlen(s);
		printf("入力されたデータは ");
		if (s[n - 1] == '\n') {
			s[n - 1] = '\0';
			printf("%s", s);
		}
		else {
			printf("%s", s);
			f_c_2();
		}
		printf(" です。\n");
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
	if (std::getline(std::cin, s)) {
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
