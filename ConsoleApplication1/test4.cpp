#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

#include <stdio.h>
#include <string.h>

bool f_c()
{
	char s[256];//�Ō�� '\0' (Null����) ������̂� 255 �����܂Ŏ󂯎���
	if (scanf("%s", s) == 1) {
		printf("���͂��ꂽ�f�[�^�� %s �ł��B\n", s);
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
	if (std::cin >> s) {
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
