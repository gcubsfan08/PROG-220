#include "include/logic.h"

long fibbonacci(const int n)
{ 
    if (n < 1) return 0;
    if (n == 1) return n;

    long ret = (fibbonacci(n - 1) + fibbonacci(n - 2));
    return ret;
}

int is_prime(const int n) { return 0; }

long factorial(const int n) { return 0; }

int reverse(const int n) { return 0; }
