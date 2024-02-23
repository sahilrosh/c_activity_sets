#include<stdio.h>
#include<complex.h>

struct _complex 
{
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int get_n()
{
    int n ;
    printf("enter the number of complex numbers:");
    scanf("%d" , &n);
    return n;
}


Complex input_complex()
{
    Complex c;
    printf("enter the real part:");
    scanf("%f" , &c.real);
     printf("enter the imaginary part:");
    scanf("%f" , &c.imaginary);
    return c;
}

void input_n_complex(int n , Complex c[n])
{
    for(int i=0 ; i < n ; i ++)
    {
        printf("enter Complex Number %d:\n"  , i + 1);
        c[i] = input_complex();

    }
}

Complex add(Complex a , Complex b )
{
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

Complex add_n_complex(int n , Complex c[n])
{
    Complex sum;
    for(int i = 0 ; i<n ; i++)
    {
        sum = add(sum,c[i]);
    }
    return sum;
}

void output(int n , Complex c[n] , Complex result)
{
    printf("Complex numbers :\n");
    for (int i = 0; i < n; i++) 
    {

        printf("number %d : %.3f + %.3fi\n" , i +1 , c[i].real , c[i].imaginary);

    }
    printf("sum of the %d complex number : %f.3f + %3fi\n" , n , result.real , result.imaginary); 
}

int main()
{ 
    int n = get_n();
    Complex complex_numbers[n];
    input_n_complex(n , complex_numbers);
    Complex sum = add_n_complex(n,complex_numbers);
    output(n , complex_numbers , sum);
    return 0;
}