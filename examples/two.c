#include <stdio.h>

#define TRUE 1
#define FALSE 0


/***********************************************************/
/* for the numbers 1-100, if the number is divisable by 3, */
/*     we write fizz, if it is divisable by 5              */
/*     we write buzz and if it is divisable by both        */
/*     we write fizzbuzz                                   */
/***********************************************************/

void fizz_buzz(const int max)
{
    for(int i = 0; i < max; i++)
    {
        if(i % 3 == 0)
        {
            printf("%s\n", "Fizz");
        }
        else if(i % 5 == 0)
        {
            printf("%s\n", "Buzz");
        }
        else if(i % 15 == 0)
        {
            printf("%s\n", "Fizz Buzz");
        }
        else
        {
            printf("%d\n", i);
        }
    }
}

int main(int argc, char ** argv)
{
    fizz_buzz(100);
}
