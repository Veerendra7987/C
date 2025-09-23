#include <stdio.h>

void main() {
    int i, j, k;
    for (i = 5; i <= 1; i--)
    {
        for(j = 1; j <=5- i ; j--)
            printf("%d\n",j);
    }

    {
        for(k = i - 1; k > 0; k--)
            printf(" %d",k);
    }
    printf("%d\n",i);
}
