#include <stdio.h>
void memcomp(int src[], int dst[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        if(src[i] != dst[i])
        {
            printf("Failure");
            return;
        }
    }
    printf("Success");
}
int main()
{
    int src[10], dst[10], n, i;
    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter first array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &src[i]);
    printf("Enter second array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &dst[i]);
    memcomp(src, dst, n);
}
