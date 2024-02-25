#include<stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int input_number()
{
    int n;
    printf("enter the no.\n");
    scanf("%d",&n);
    return n;
}

int is_composite(int n)
{
    if (n<=1)
    {
        return 1;
    } 
    int i;
    for ( i = 2; i < n/2; i++)
    {
        if (n%i==0)
        {
            return 2;
        }
    }
    return 0;
}

void output(int n, int result)
{
    if (result==1)
    {
        printf("%d is neither composite nor prime no. \n",n);
    }
    else if (result==2)
    {
        printf("%d is composite no.\n",n);
    }
    else
    {
        printf("%d is a prime no.\n",n);
    }
}

int main()
{
    int n;
    n=input_number();
    int result;
    result=is_composite(n);
    output(n,result);
    return 0;
}