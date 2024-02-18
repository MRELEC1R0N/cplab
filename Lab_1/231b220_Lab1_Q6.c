/*****************************************************************/
// This program is developed by Piyush Kumar Singh (Er. No 231b220)
/*****************************************************************/


#include <stdio.h>
#include <math.h>

int prefect_square(int n)
{
    int root = (int) sqrt(n);

    if (root * root == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int findps()
{
    int a, b, n;
    for (a = 0; a <= 9; a++)
    {
        for (b = 0; b <= 9; b++)
        {
            if (a != b)
            {
                n = 1000 * a + 100 * a + 10 * b + b;
                if (prefect_square(n))
                {
                    return n;
                }
            }
        }
    }
    return 0;
}

int main()
{
    int result = findps();
    if (result != 0)
    {
        printf("The four digit number AABB which is a perfect square is %d\n", result);
    }
    else
    {
        printf("Number not found\n");
    }
    return 0;
}
