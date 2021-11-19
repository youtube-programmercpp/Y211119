#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	short n;
	if (scanf("%hd", &n) == 1) {
		// short → int に引き延ばされる
		printf("入力値：%d\n", n);
	}

	float x;
	if (scanf("%f", &x) == 1) {
		// float 型 → double 型に引き延ばされる
		printf("入力値：%f\n", x);
	}
}
// ----------------int--------------------
//                     -------short-------
//                               ---char--
// 1111 1111 1111 1111 1000 0000 0000 0000  = -32768
// 0000 0000 0000 0000 1000 0000 0000 0000  =  32768
//
