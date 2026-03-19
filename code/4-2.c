#include <stdio.h>

int main()
{
      for (i = 2; i <= 9; i++) {
        printf("--- %d단 ---\n", i);
        for (j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }

    return 0;
}
