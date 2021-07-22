#include <stdio.h>

int main(void)
{
    // Get 2 integers from user
    int n, k;
    scanf("%i %i", &n, &k);

    // Creation of array storing input value
    int arr[n];

    // Counts how many inputs are divisible by k
    int counter = 0;

    // Reads inputs from user and checks if they are divisible by k
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
        if (arr[i] % k == 0)
        {
            counter++;
        }
    }
    printf("%i\n", counter);
}
