#include <stddef.h>
#include <stdio.h>
#define ERROR 1
#define SUCCESS 0

typedef unsigned int age;

union Union{
    int x;
    float y;
    char c;
};

typedef struct {
    int x;
    int y;
} Point;

int add(const int, const int);

void print_array(int *n, size_t len)
{
    for(size_t i = 0; i < len; i++)
    {
        printf("%d\n",n[i]);
    }
}

int k(int i)
{
    printf("%d\n", i);
    return ++i;
}

void bar(Point *p){
    p->x;
    (*p).y;
}

void foo(int x)
{
    x = x + 10;
}

void foo2(int *x_ptr)
{
    *x_ptr += 10;
}

void foo3(int *x_ptr)
{
    int *y_ptr;
    x_ptr = y_ptr;
}

int main(void)
{
    int x = 100;
    foo(x);
    printf("%d\n", x);

    foo2(&x);
    printf("%d\n", x);

    const int i = 10;
    const int *i_ptr;
    const int *i_ptr2;
    i_ptr = i_ptr2;

    Point p = { .x = 10, .y = 10 };
    Point p2;
    p2.x = 10;
    p2.y = 10;

    int a[5] = { 1, 2, 3, 4, 5};


    size_t s = sizeof(a) / sizeof(a[0]);

    for(int i = 0; i < 5; i++)
    {

    }
    return SUCCESS;
}


int f()
{
    int i = 0;
    return ++i;
}

int f2()
{
    int i = 0;
    return i++;
}

int add(const int x, const int y)
{
    return x + y;
}
