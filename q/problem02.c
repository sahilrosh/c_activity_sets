#include<stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int input_side()
{
    int a;
    printf("enter a side of the triangle:");
    scanf("%d",&a);
    return a;
}

int check_scalene(int a, int b, int c)
{
    if(a!=b  && b!=c && a!=c)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void output(int a, int b, int c, int isscalene)
{
    if(isscalene>0)
    {
        printf("the triangle %d,%d,%d is scalene",a,b,c);
    }
   else if(isscalene<0)
    {
        printf("the triangle %d,%d,%d is not scalene", a,b,c);
    }
}

int main()
{
    int a,b,c,isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}