/*****************************************************************/
// This program is developed by Piyush Kumar Singh (Er. No 231b220)
/*****************************************************************/


#include <stdio.h>

int roundup(int i, int j)
{
    if (i % j == 0)
    {
        return i;
    }
    else
    {
        return i + j - (i % j);
    }
}

int main()
{
    int i, j, output;
    
    printf("Enter the value of i: ");
    scanf("%d", &i);
    printf("Enter the value of j: ");
    scanf("%d", &j);

    output = roundiup(i, j);

    printf("The next largest multiple of %d after %d is %d\n", j, i, output);
    return 0;
}
