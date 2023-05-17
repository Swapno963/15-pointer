#include<stdio.h>
void fun(int * p)
{
    printf("address of p is %p\n",p);
    // to change the value of x, we can de-referenec
    *p = 200;
}
int main()
{
    int x = 100;
    fun(&x);
    // let's see is there any change
    printf("%d\n",x);
    printf("address of x %p\n",&x);

    // both addresss is going to be same
    return 0;
}