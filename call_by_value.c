#include<stdio.h>
void fun(x)
{
    printf("Address of x in fun %p\n",&x);

}
int main()
{
    int x = 10;
    fun(x);
    printf("Address of x in main %p\n",&x);
    return 0;
}