#include<stdio.h>
#include<string.h>
void fun(char * ar)
{
    printf("%d",strlen(ar));// we can get the access of lenth of stirng inside function thou it's not possible for arr

    // the second interesting this is, if we want to return arr or string(whici is also a kind of arr) then we will get only the first element and other element will be deleted
}
int main()
{
    char ar[5] = "World";
    fun(ar);
    return 0;
}