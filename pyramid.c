#include <cs50.h>
#include <stdio.h>

void print_row(int length);

int main(void)
{
   int heigth = 5;
   for (int i = 0; i < heigth; i++)
   {
     print_row(i+1);
   }


  return 0;
}

void print_row(int length)
{
    for (int i = 0; i < length; i++){
        printf("#");
    }
    printf("\n");
}
