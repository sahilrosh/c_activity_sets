#include <stdio.h>
#include<math.h>
 
int input_n();
int sum_n_nos(int n);
void output (int n , int sum);

int input_n()
{

    int n;
    printf("enter a number:");
    scanf("%d" , &n);
    return n ;
}

int sum_n_nos(int n)
{
    int sum = 0;
    for (int i=1 ; i<=n ; i++)
    { 
        sum +=i;
    }
    return sum;
}

void output(int n , int sum)
{
    printf("the sum is :%d" , sum);
}

int main()
{
    int n , sum ;
    n=input_n();
    sum=sum_n_nos(n);
    output(n,sum);
    return 0;
}
