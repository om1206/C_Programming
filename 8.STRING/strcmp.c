#include <stdio.h>
#include <string.h>
char *mystrcmp(char *str1, char *str2)
{
    while (*str1 != '\0')
    {
        if (*str1 == *str2)
        {
            str1++;
            str2++;
        }
        else
        {
            return (str1, str2);
        }
    }
    return 0;
}
void main()
{
    char *str1 = "Ravindra";
    char *str2 = "Rajendra";
    int diff = 1;
    if (strlen(str1) == strlen(str2))
    {
        diff = mystrcmp(str1, str2);
    }
    if (diff == 0)
    {
        printf("String are Equal\n");
    }
    else
    {
        printf("String are not Equal\n");
    }
}