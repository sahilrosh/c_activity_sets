#include <stdio.h>

int input_array_size(void);  
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n], int sum);

int input_array_size(void)  
{
    int n;
    printf("enter the size of array: \n");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("enter the array :");
        scanf("%d", &a[i]);
    }
}

int sum_n_array(int n, int a[n])
{
    int sum = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

void output(int n, int a[n], int sum)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
        {
            printf("+");
        }
    }
    printf(" is %d", sum);
}

int main()
{
    int n, sum;
    n = input_array_size();
    int a[n];
    input_array(n, a);
    sum = sum_n_array(n, a);
    output(n, a, sum);
    return 0;
}