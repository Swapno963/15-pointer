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

    // hear I passed only value not reference, if any change heappen inside function then nothing will hepen x in main, 
    // because the address is diffrent
    return 0;
}