#include <stdio.h>
int main()
{
   int num=32;
   int num1 = increment(num);
   printf("num1 value is: %d", num);
   printf("\nnum2 value is: %d", num1);

   return 0;
}
int increment(int var)
{
    var = var+1;
    return var;
}
