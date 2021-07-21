#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int withdraw;
    float balance;

    scanf("%i %f", &withdraw, &balance);

    if (withdraw % 5 != 0 || withdraw + .5> balance)
    {
        printf("%0.2f\n", balance);
    }
    else
    {
        balance = balance - withdraw - .5;
        printf("%0.2f\n", balance);
    }
}