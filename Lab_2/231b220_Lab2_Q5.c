/*****************************************************************/
// This program is developed by Piyush Kumar Singh (Er. No 231b220)
/*****************************************************************/

#include <stdio.h>

struct complex {
    double real; 
    double imag; 
};


struct complex add(struct complex c1, struct complex c2)
{
    
    struct complex result;
    
    result.real = c1.real + c2.real;
    
    result.imag = c1.imag + c2.imag;
  
    return result;
}

int main()
{
    struct complex c1 = {1.0, 2.0};
    struct complex c2 = {3.0, 4.0};
    struct complex sum;
    sum = add(c1, c2);
    printf("The sum of the two complex numbers is: %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}
