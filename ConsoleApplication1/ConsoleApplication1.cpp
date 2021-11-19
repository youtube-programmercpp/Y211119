#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    for (;;) {
        printf("整数値をスペース区切りで２個入力してください。\n");
        int a, b;
        if (scanf("%d%d", &a, &b) == 2) {
            printf("二つの値を足すと %d になります。\n", a + b);
        }
        else {
            printf("入力に誤りがありました。\n");
        }
    }
}
