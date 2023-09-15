#include <stdio.h>

//int demo4_main()
int main()
{
   int i, a, b, c ,d;
   int r1, r2, r3;
   i = 12;
   a = 8;
   b = 7;
   c = 5;
   d = 2;
   r1 = ++i % 7;
   printf("i = %d, r1 = %d\n", i, r1);
   r2 = 5 * (c - 3 + d);
   printf("r2 = %d\n", r2);
   r3 = a * (b + c / d) - 22;
   printf("r3 = %d\n", r3);
}

