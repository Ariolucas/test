#include <cs50.h>
#include <stdio.h>

int main(){

    int a = get_int("x: ");
    int b = get_int("y: ");

    if (a < b){
        printf("x is less than y\n");
    }
    else if (a > b){
        printf("x is not less than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
    return 0;
}
