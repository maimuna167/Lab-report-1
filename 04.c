#include <stdio.h>
char GETCHAR(char str[], int pos)
{
    return str[pos - 1];
}
void PUTCHAR(char str[], int pos, char ch)
{
    str[pos - 1] = ch;
}
int LENGTH(char str[])
{
    int i = 0;

    while (str[i] != '\0')
        i++;

    return i;
}
int POS(char str[], char sub[])
{
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while (sub[j] != '\0' && str[i + j] == sub[j])
            j++;

        if (sub[j] == '\0')
            return i + 1;
    }

    return -1;
}
void CONCAT(char str1[], char str2[], char result[])
{
    int i = 0, j = 0;

    while (str1[i] != '\0')
    {
        result[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0')
    {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0';
}
void SUBSTRING(char str[], int pos, int len, char result[])
{
    int i;

    for (i = 0; i < len; i++)
    {
        result[i] = str[pos - 1 + i];
    }

    result[i] = '\0';
}
void DELETE(char str[], int pos, int len, char result[])
{
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (i < pos - 1 || i >= pos - 1 + len)
        {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';
}
void INSERT(char str1[], char str2[], int pos, char result[])
{
    int i, j = 0;
    for (i = 0; i < pos - 1; i++)
    {
        result[j] = str1[i];
        j++;
    }
    for (i = 0; str2[i] != '\0'; i++)
    {
        result[j] = str2[i];
        j++;
    }
    for (i = pos - 1; str1[i] != '\0'; i++)
    {
        result[j] = str1[i];
        j++;
    }

    result[j] = '\0';
}
int COMPARE(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];

        i++;
    }

    return str1[i] - str2[i];
}


int main()
{
    char s1[100], s2[100];
    char concat[200], sub[100], del[100], ins[200];

    printf("Enter string 1 (s1): ");
    scanf("%s", s1);

    printf("Enter string 2 (s2): ");
    scanf("%s", s2);

    printf("\n=== RESULTS ===\n");


    // LENGTH
    printf("LENGTH(s1): %d\n", LENGTH(s1));


    // GETCHAR
    printf("GETCHAR(s1, 1): %c\n", GETCHAR(s1, 1));

    // PUTCHAR
    PUTCHAR(s1, 1, 'z');
    printf("After PUTCHAR(s1, 1, 'z'): %s\n", s1);

    // POS
    printf("POS(s2 inside s1): %d\n", POS(s1, s2));

    // CONCAT
    CONCAT(s1, s2, concat);
    printf("CONCAT(s1, s2): %s\n", concat);

    // SUBSTRING
    SUBSTRING(s1, 1, 3, sub);
    printf("SUBSTRING(s1, 1, 3): %s\n", sub);

    // DELETE
    DELETE(s1, 1, 2, del);
    printf("DELETE(s1, 1, 2): %s\n", del);

    // INSERT
    INSERT(s1, s2, 2, ins);
    printf("INSERT(s1, s2, 2): %s\n", ins);

    // COMPARE
    printf("COMPARE(s1, s2): %d\n", COMPARE(s1, s2));

    return 0;
}
