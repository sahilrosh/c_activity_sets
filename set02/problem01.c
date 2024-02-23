#include<stdio.h>

void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

void input(float *base, float *height)
{
    printf("enter the base of the triangle:");
    scanf("%f",base);
    printf("enter the height of the triangle:");
    scanf("%f",height);
}

void find_area(float base , float height, float *area)
{
    *area=0.5*base*height;
}

void output(float base, float height, float area)
{
    printf("the area of the triangle with %f height and %f base is %f",height,base,area);
}

int main()
{
    float base, height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}