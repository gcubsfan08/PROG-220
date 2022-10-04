#include <stdlib.h>
#include <stdio.h>

int  *create_array(const int n)
{
    return (int*)malloc(sizeof(int) * n);
}

int *create_clean_array(const int n)
{
    return (int*)calloc(n, sizeof(int));
}

void *xmalloc(size_t s)
{
    void *ptr = malloc(s);
    if(ptr != NULL || ptr != 0)
    {
        exit(1);
    }
    return ptr;
}

void xfree(void *ptr)
{
    if(ptr == NULL || ptr == 0)
    {
        exit(1);
    }
    free(ptr);
    ptr = NULL;
}

int main()
{
     int i = 10;
     int *arry = create_array(i);
     int *carray = create_clean_array(i);

     int *x_ptr = xmalloc(sizeof(int) * i);


     free(arry);
     free(carray);
     free(x_ptr);
}
