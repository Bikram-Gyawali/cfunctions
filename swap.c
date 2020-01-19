#include<stdio.h>
int swap(int a, int b);          

int main()
{
    int m = 84, n =20.1;
    printf(" values before swap  m = %d \nand n = %d", m, n);
    swap(m, n);                         
}

int swap(int a, int b)
{ 
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf(" \nvalues after swap m = %d\n and n = %d", a, b);
}
