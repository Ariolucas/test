#include <cs50.h>
#include <stdio.h>

int main() {
    // Write C code here
    string ans = get_string("what is your name: ");

    printf("hello, %s\n", ans);


    return 0;
}
