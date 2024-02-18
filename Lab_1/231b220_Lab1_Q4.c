/*****************************************************************/
// This program is developed by Piyush Kumar Singh (Er. No 231b220)
/*****************************************************************/


#include <stdio.h>

int check_arr(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (A[i] == i)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr1[] = {0, 1, 2, 3, 4};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("%d\n", check_arr(arr1, size1));

    return 0;
}
