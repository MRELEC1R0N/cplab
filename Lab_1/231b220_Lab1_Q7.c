/*****************************************************************/
// This program is developed by Piyush Kumar Singh (Er. No 231b220)
/*****************************************************************/

#include <stdio.h>

int strlenght(char *str)
{
    int length = 0;
    while (str[length] != '\\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char input[100];
    printf("Enter the string: ");
    scanf("%s", input);
    printf("The length of the string is %d\n", strlenght(input));
    return 0;
}
