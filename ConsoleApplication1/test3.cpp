#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
bool f_c()
{
	char n;
	if (scanf("%hhd", &n) == 1) {
		printf("���͂��ꂽ�f�[�^�� %d �ł��B\n", n);
		return true;
	}
	else {
		printf("���͂ɃG���[������܂����B\n");
		return false;
	}
}
bool f_cpp()
{
	char n;
	if (std::cin >> n) {
		std::cout << "���͂��ꂽ�f�[�^�� " << n << " �ł��B\n";
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
