#include<stdio.h>
int main()
{
    //  & dita hobe valu daber somy, access korber somy o
    int x =100;
    int * ptr = &x;
    printf("%p\n",&ptr); // give the address ptr not the value(of x)
    printf("%p\n",&x); // give the address of x
    printf("%p\n",ptr); // ptr store the value of x
    printf("%d\n",ptr); // give the address in decimal


    return 0;
}