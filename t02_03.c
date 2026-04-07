// 12S25034 - Ignacia Manurung

#include <stdio.h>

int main(int _argv, char **_argc)
{
    char operator;
    int num;
    int hasil;

    scanf(" %c", &operator);
    if (operator == '*') {
        hasil = 1;
    } else {
        hasil = 0;
    }

    for (int i = 0; i < 4; i++) {
        scanf("%d", &num);
        if (num == -1) {
            printf("0\n");
            break;
        }
        if (operator == '+') {
            hasil = hasil + num;
        } else if (operator == '-') {
            hasil = hasil - num;
        } else if (operator == '*') {
            hasil = hasil * num;
        }
        printf("%d\n", hasil);
    }

    return 0;
}