/*****************************************************************/
// This program is developed by Piyush Kumar Singh (Er. No 231b220)
/*****************************************************************/

#include <stdio.h>
int find(int arr[], int n)
{
    int x1 = 0, x2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        x1 = x1 ^ arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        x2 = x2 ^ i;
    }
    return x1 ^ x2;
}

int main()
{
    int arr1[] = {1, 2, 3, 5};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};

    int n1 = sizeof(arr1) / sizeof(arr1[0]) + 1;
    int n2 = sizeof(arr2) / sizeof(arr2[0]) + 1;

    printf("The missing number in arr1 is %d\n", find(arr1, n1));
    printf("The missing number in arr2 is %d\n", find(arr2, n2));

    return 0;
}
