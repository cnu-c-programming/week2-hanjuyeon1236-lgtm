#include <stdio.h>

int main()
{
    int a, b;
    char op;

    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf(%d\n", a * b);
            break;
        case '/':
            if(b == 0) {
                printf("0으로 나눌 수 없습니다.");
            } else {
            printf("%d\n", a / b);
            }
            break;
    }
    return 0;
}

