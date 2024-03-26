#include <stdio.h>

void pattern(int length);

int main()
{
   int len = 5;

   for (int j = 0; j < len; j++)
   {
        pattern(len);
   }

    return 0;
}

void pattern(int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("*");
    }
    printf("\n");
}
