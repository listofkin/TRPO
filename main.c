#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    c = pow(a, 2) + pow(b, 2);
    printf("%d\n", c);
    return 0;
}