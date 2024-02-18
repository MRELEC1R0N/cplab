/*****************************************************************/
// This program is developed by Piyush Kumar Singh (Er. No 231b220)
/*****************************************************************/


#include <stdio.h>

int compare(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 != *s2)
        {
            return *s1 - *s2;
        }
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "Hello";
    printf("compare(str1, str2) = %d\n", compare(str1, str2));
    printf("compare(str1, str3) = %d\n", compare(str1, str3));
    printf("compare(str2, str3) = %d\n", compare(str2, str3));
    return 0;
}
