/*****************************************************************/
// This program is developed by Piyush Kumar Singh (Er. No 231b220)
/*****************************************************************/

#include <stdio.h>

void matrixadd(int m1[][3], int m2[][3], int m3[][3], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

int main()
{
    int mat1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int mat3[2][3];
    matrixadd(mat1, mat2, mat3, 2, 3);
    printf("The sum of the two matrices is:\n");
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
