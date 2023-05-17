#include<stdio.h>
void fun(int *ar)
{
    ar[0] = 100;
}
int main()
{
    int ar[5] = {10,20,30,40,50}; // array works as call by reference
    fun(ar);
    for(int i=0; i<5; i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}