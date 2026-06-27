#include <stdio.h>
void printNumbers()
{
    int i, sum;
    for(i = 10; i <= 99; i++)
    {
        sum = i / 10 + i % 10;
        if(i % 2 != 0 && sum == 7)
            printf("%d\n", i);
    }
}
int main()
{
    printNumbers();
}
