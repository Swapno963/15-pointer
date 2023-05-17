#include<stdio.h>
void fun(int * ar, int size)
{
    printf("%d\n",sizeof(ar)/sizeof(int)); // but hear we can't get the size for this reson we need to take size as well.

    // let's print all element
    for(int i=0; i<size; i++)
    {
        printf("%d ",ar[i]);
    }
}
int main()
{
    int ar[5] = {10,20,30,40,50};
    printf("%d\n",sizeof(ar)/sizeof(int)); // by this we can get the size of arr
    fun(ar,5);
    return 0;
}