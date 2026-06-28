#include <stdio.h>
void strcon(char src1[], char src2[], char dst[])
{
    int i = 0, j = 0;
    while (src1[i] != '\0')
    {
        dst[j] = src1[i];
        i++;
        j++;
    }
    i = 0;
    while (src2[i] != '\0')
    {
        dst[j] = src2[i];
        i++;
        j++;
    }
    dst[j] = '\0';
}
int main()
{
    char src1[20], src2[20], dst[40];
    printf("Enter first string: ");
    scanf("%s", src1);
    printf("Enter second string: ");
    scanf("%s", src2);
    strcon(src1, src2, dst);
    printf("Concatenated string: %s", dst);
}
