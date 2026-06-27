#include <stdio.h>
void copy(int *a, int *b)
{
    *b = *a;
}
int main()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    copy(&x, &y);
    printf("Copied value = %d", y);
}
