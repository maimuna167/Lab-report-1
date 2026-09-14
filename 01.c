#include <stdio.h>

int main()
{
    char str[4];
    int i, j, k;

    printf("Enter 3 characters: ");
    scanf("%s", str);

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 3; k++)
            {
                if(i != j && j != k && i != k)
                {
                    printf("%c%c%c\n", str[i], str[j], str[k]);
                }
            }
        }
    }

    return 0;
}

