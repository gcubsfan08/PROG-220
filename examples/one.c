#include <stdio.h>
#include <stdlib.h>


char *idx(char * in, const int n)
{
    return in + n;
}

void foo(char *z, size_t sz)
{
   for(size_t i = 0; i < sz; i++)
   {
       char *c = idx(z, i);
       printf("%d\n", c);
       printf("%c\n", *c);
   }
}

int main(int argc, char ** argv)
{
    int x = 100;
    int *x_ptr = &x;
    int y = *x_ptr;

    char z[3];
    z[0] = 'a';
    z[1] = 'b';
    z[2] = 'c';
    foo(z, 3);
}
