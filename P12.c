#include<stdio.h>
int fib(int n);
int fib(int n)
{
    if (n == 1 || n ==2)
    {
        return n-1;
    }
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n = 5;
    printf("The value of Fibonacci series at %d is %d", n, fib(n));
    return 0;
}