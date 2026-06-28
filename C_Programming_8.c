#include <stdio.h>
void strcomp(char src[], char dst[])
{
    int i = 0;
    while (src[i] != '\0' || dst[i] != '\0')
    {
        if (src[i] != dst[i])
        {
            printf("Failure");
            return;
        }
        i++;
    }
    printf("Success");
}
int main()
{
    char src[20], dst[20];
    printf("Enter first string: ");
    scanf("%s", src);
    printf("Enter second string: ");
    scanf("%s", dst);
    strcomp(src, dst);
}
