#include <stdio.h>

int main(int argc, char **argv) {
  printf("%s", "Hello World");

  int i = 10;
  if(i < 100)
  {
      printf("%d", i);
  }

  do
  {

  } while(i < 100);

  int x[5] = { 1, 2, 3, 4, 5};
  for(int n = 0; n < 5; n++)
  {
     printf("%d\n", x[n]);
  }
  return 0;
}
