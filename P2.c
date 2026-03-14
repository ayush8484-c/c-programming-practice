#include<stdio.h>
int main(){
    int radius ; float area ;
    
    printf("Enter radius\n");
    scanf("%d",&radius);
    area = 3.14*radius*radius;
    printf("The area of the circle is %.2f\n", area);
    return 0;
}