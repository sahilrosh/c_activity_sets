#include<stdio.h>

int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

 int input (int *a , int*b , int*c)
{
    int n ;
    printf("enter a number:");
    scanf("%d" ,n);
}
 
void output(int a, int b, int c, int largest)
{
    printf("largest of %d, %d and %d is %d",a, b, c, largest);
}

 void compare(int a,int b,int c , int*largest)
{
    if(a>=b && a>=c);
    return a;
    else if(b>=a && b>=c)
    return b;
    else
    return c;
}

 int main()
{
     int a,b,c,largest;
    input(&a);
    input(&b);
    input(&c);
    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}