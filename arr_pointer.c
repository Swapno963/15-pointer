#include<stdio.h>
int main()
{
    int arr[5] = {10,20,30,40,50};

// address of array and first index is same;
    printf("address of 0th index %p\n",&arr[0]);
    printf("address of arr index %p\n",arr);

// value of first index and de_reference of arr is same
    printf("value of 0th index %d\n",arr[0]);
    printf("value of 0th index %d\n",*arr);

// value of arr[1] and de_reference of (arr+1) is same
    printf("value of second element %d\n",arr[1]);
    printf("value of second element %d\n",*(arr+1));
    printf("value of second element %d\n",*(1+arr));
    printf("value of second element %d\n",1[arr]);

    return 0;
}