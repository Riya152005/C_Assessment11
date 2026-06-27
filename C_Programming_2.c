#include <stdio.h>
void increment(int a[])
{
    int i;
    for(i = 0; i < 5; i++)
        a[i]++;
}
int main()
{
    int a[5], i;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    increment(a);
    printf("After increment:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);
}
