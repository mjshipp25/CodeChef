#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Invalid Format\n");
        return 1;
    }

    int withdraw = atoi(argv[1]); // Sets the 1st command line argument as the withdraw balance
    float balance = atof(argv[2]); // Sets the 2nd command line argument as the account balance

    // Checks that withdraw value is a multiple of 5 and less than account balance
    if (withdraw % 5 != 0 || withdraw + .5 > balance)
    {
        printf("%0.2f\n", balance);
    }
    else
    {
        // Calculate new account balance
        balance = balance - withdraw - .5;
        printf("%0.2f\n", balance);
    }
}