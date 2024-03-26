#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("enter a character: ");

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed!\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Dis agreed\n");
    }
    else{
        printf("try again\n");
    }
    return 0;
}
