/* Case 3: Pointer to a constant */

#include <stdio.h>

int main()
{
    const int a = 10;
    const int b = 20;
    const int c = 30;
    const int *ptr1;
    int const *ptr2;

    ptr1 = &a;
    ptr2 = &b;

    printf("a = %d b = %d\n", *ptr1, *ptr2);

    ptr1 = &c;
    printf("c = %d\n ", *ptr1);
    return 0;
}
