#include<stdio.h>
int main()
{
    //  x =1 and *ptr =1 are the same
    double x = 3.4;
    double *ptr = &x;
    double *ptr_2 = ptr;

    printf("%0.2f\n",x); 
    printf("%0.2f\n",*ptr); // both gives the the value of x
    

    // though double takes 8 bites of space, lets see how much space it takes
    printf("%d\n",sizeof(ptr)); // it only takes 4 bites of space though it decleared double and store memory address of double

    printf("%f",*ptr_2); // gives the value of x


    return 0;
}