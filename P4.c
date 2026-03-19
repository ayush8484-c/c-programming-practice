#include<stdio.h>
int main()
{
    float c , f;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9.0/5.0) + 32;
    printf("The temperature in Fahrenheit is: %.2f\n", f);
    return 0;
}
