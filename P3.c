#include<stdio.h>
int main(){

int radius, height ;
 float volume;
printf("Enter the radius\n");
scanf("%d", &radius);
printf("Enter the height\n");
scanf("%d" , &height);
volume = 3.14*radius*radius*height;
printf("Volume of the cylinder is %.2f\n" , volume);
return 0;
}