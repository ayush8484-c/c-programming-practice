#include <stdio.h>
int main()
{
    int marks1, marks2, marks3, marks4, marks5, marks6;
    printf("Enter marks of subject 1:\n");
    scanf("%d", &marks1);
    printf("Enter marks of subject 2:\n");
    scanf("%d", &marks2);
    printf("Enter marks of subject 3:\n");
    scanf("%d", &marks3);
    printf("Enter marks of subject 4:\n");
    scanf("%d", &marks4);
    printf("Enter marks of subject 5:\n");
    scanf("%d", &marks5);
    printf("Enter marks of subject 6:\n");
    scanf("%d", &marks6);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33 ||marks4 < 33 || marks5 < 33 || marks6 < 33)
    {
        printf("You are failed due to less marks in individual subject(s)\n");
    }
    else if((marks1 + marks2 + marks3 + marks4 + marks5 + marks6) / 6 < 33)
    {
        printf("You are failed due to less percentage\n");
    }
    else
    {
     printf("You are passed\n");
     }
    return 0;
}

