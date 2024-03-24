/* Case 2: Constant Pointer */

#include <stdio.h>

int main()
{
    int a = 10;
    int * const ptr = &a;
    printf("%d\n", *ptr);
    *ptr = 20;
    printf("%d\n", *ptr);
    /* int b = 20;
    ptr = &b; */ /*not allowed */
    return 0;
}
