#include<stdio.h>
int main()
{
    float p , r , t ; i;
    printf("Enter the principal amount : ");
    scanf("%f",&p);
    printf("Enter the rate of interest : ");
    scanf("%f",&r);
    printf("Enter the time in years : ");
    scanf("%f",&t);
    float i = (p * r * t) / 100;
    printf("the simple interst is : %f", i);
    return 0;
}
