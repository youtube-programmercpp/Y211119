#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	short n;
	if (scanf("%hd", &n) == 1) {
		// short �� int �Ɉ������΂����
		printf("���͒l�F%d\n", n);
	}

	float x;
	if (scanf("%f", &x) == 1) {
		// float �^ �� double �^�Ɉ������΂����
		printf("���͒l�F%f\n", x);
	}
}
// ----------------int--------------------
//                     -------short-------
//                               ---char--
// 1111 1111 1111 1111 1000 0000 0000 0000  = -32768
// 0000 0000 0000 0000 1000 0000 0000 0000  =  32768
//
