#include<stdio.h>
#include<math.h>

float input(); 
float square_root(float n); 
void output(float n, float sqrroot);

float input()
{

    int n; 
    printf("enter a number :");
    scanf("%d" , &n);
    return n;
}

float square_root(float n)
{
    float x_old=1 , y_new=n/2;
    float xy = 0.000001;
    while(fabs(y_new-x_old)>xy)
    {
        x_old=y_new;
        y_new = 0.5*(x_old + n/x_old);
    }
    return y_new;
}

void output(float n , float sqrroot)
{
    printf("the square root of %f is %f" , n , sqrroot);
}

int main()
{
    float n , sqrroot;
    n=input();
    sqrroot = square_root(n);
    output(n,sqrroot);
    return 0;
}