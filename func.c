#include <cs50.h>
#include <stdio.h>

int add(int a, int b);


int main(void)
{
  int x = get_int("x: ");
  int y = get_int("y: ");

  printf("%i\n",  add(x,y));

 return 0;
}

int add(int a, int b)
{
    return a + b;
}
