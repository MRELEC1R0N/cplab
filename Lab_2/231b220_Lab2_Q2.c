/*****************************************************************/
// This program is developed by Piyush Kumar Singh (Er. No 231b220)
/*****************************************************************/

#include <stdio.h>
#include <stdlib.h>

long double *reverse(long double *arr, int size, long double *rev)
{
    rev = (long double *)malloc(size * sizeof(long double));
    if (rev == NULL)
    {
        printf("Memory is not allocatd\n");
        return NULL;
    }
    for (int i = 0; i < size; i++)
    {
        rev[size - 1 - i] = arr[i];
    }
    return rev;
}

int main()
{
    long double *arr = NULL, *rev = NULL;
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    arr = (long double *)malloc(size * sizeof(long double));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%Lf", &arr[i]);
    }
    rev = reverse(arr, size, rev);
    if (rev != NULL)
    {
        printf("The reversed array is: ");
        for (int i = 0; i < size; i++)
        {
            printf("%Lf ", rev[i]);
        }
        printf("\n");
    }
    free(arr);
    free(rev);
    return 0;
}
