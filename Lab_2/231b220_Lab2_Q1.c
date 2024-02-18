/*****************************************************************/
// This program is developed by Piyush Kumar Singh (Er. No 231b220)
/*****************************************************************/


#include <stdio.h>

void minmax(int array[], int length, int *min, int *max)
{
    int minval = array[0];
    int maxval = array[0];
    for (int i = 1; i < length; i++)
    {
        if (array[i] < minval)
        {
            minval = array[i];
        }
        if (array[i] > maxval)
        {
            maxval = array[i];
        }
    }
    *min = minval;
    *max = maxval;
}

int main()
{
    int arr[] = {12, 34, 56, 78, 90, 11, 23, 45, 67, 89};
    int len = sizeof(arr) / sizeof(arr[0]);

    int min, max;
    minmax(arr, len, &min, &max);

    printf("The minimum value in the array is %d\n", min);
    printf("The maximum value in the array is %d\n", max);

    return 0;
}
