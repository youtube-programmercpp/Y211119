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
		printf("���͂��ꂽ�f�[�^�� ");
		if (s[n - 1] == '\n') {
			s[n - 1] = '\0';
			printf("%s", s);
		}
		else {
			printf("%s", s);
			f_c_2();
		}
		printf(" �ł��B\n");
		return true;
	}
	else {
		printf("���͂ɃG���[������܂����B\n");
		return false;
	}
}
bool f_cpp()
{
	std::string s;
	if (std::getline(std::cin, s)) {
		std::cout << "���͂��ꂽ�f�[�^�� " << s << " �ł��B\n";
		return true;
	}
	else {
		std::cout << "���͂ɃG���[������܂����B\n";
		return false;
	}
}
int main()
{
	if (f_c()) {
		(void)f_cpp();
	}
}
