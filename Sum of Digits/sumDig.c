#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%i", &t);
    for (int i = 0; i < t; i++)
    {
        char string[256];
        scanf("%s", string);
        int sum = 0;
        for (int j = 0; j < strlen(string); j++)
        {
            sum += string[j] - 48;
        }
        printf("%i\n", sum);
    }
}
