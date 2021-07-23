#include <stdio.h>

int main(void)
{
    int t;
    scanf("%i", &t); // t = total number of test case
    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%i %i", &a, &b);
        int sum = a + b;
        printf("%i\n", sum);
    }
}
