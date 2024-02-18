/*****************************************************************/
// This program is developed by Piyush Kumar Singh (Er. No 231b220)
/*****************************************************************/


#include <stdio.h>

char* strcat( char* s, char* t){
    int i, j;
    i = j = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    while ((s[i++] = t[j++]) != '\0')
    {
        ;
    }
    return s;
}


int main()
{
    char s[100], t[100];
    printf("Enter the first string: ");
    scanf("%s", s);
    printf("Enter the second string: ");
    scanf("%s", t);
    printf("The concatenated string is %s\n", strcat(s, t));
    return 0;
}