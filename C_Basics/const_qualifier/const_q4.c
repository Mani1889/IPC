/* Case 4: Constant pointer to a constant */

#include <stdio.h>

int main()
{
    const int a = 10;
    const int b = 20;
    const int * const ptr1 = &a;
    int const * const ptr2 = &b;

    printf("a = %d, b = %d \n", *ptr1, *ptr2);

    return 0;
}
