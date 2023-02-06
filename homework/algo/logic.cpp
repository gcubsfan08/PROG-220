#include "include/logic.h"

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
 
int main()
{
    int n = 9;
    printf("%d", fib(n));
    getchar();
    return 0;
}

int is_prime(const int n) { return 0; }

long factorial(const int n) { return 0; }

int reverse(const int n) { return 0; }
