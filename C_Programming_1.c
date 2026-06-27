#include <stdio.h>
int main()
{
    int *p, n;
    p = &n;
    printf("Enter a number: ");
    scanf("%d", p);
    printf("Before changing: %d\n", *p);
    *p = *p + 10;   
    printf("After changing: %d\n", *p);
}
