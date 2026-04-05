#include <stdio.h>
int main()
{
    int a = 5;
    int b = 10;

    if (a > b)
    {
        printf("a (%d) is greater than b (%d)\n", a, b);
    }
    else if (a < b)
    {
        printf("a (%d) is lesser than b (%d)\n", a, b);
    }
    else
    {
        printf("a (%d) and b (%d) are equal \n", a, b);
    }

    return 0;
}
