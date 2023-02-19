#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,x,x1,x2,delta;
    double sqrt();
    printf("Nhap cac he so a: ");
    scanf("%f", &a);
    printf("Nhap cac he so b: ");
    scanf("%f", &b);
    printf("Nhap cac he so c: ");
    scanf("%f", &c);
    if (a==0)
    {
        if (b==0)
            if (c==0)
                printf("Phuong trinh vo so nghiem.");
            else
                printf("Phuong trinh vo nghiem.");
        else
            x=-c/b;
            printf("Nghiem cua phuong trinh la: x=%.2f.", x);
    }
    else
    {
        double delta= b*b-4*a*c;
        if (delta>0)
        {
            x1=(-b+ sqrt(delta))/2*a;
            x2=(-b- sqrt(delta))/2*a;
            printf("Phuong trinh co 2 nghiem phan biet: x1=%.2f, x2=%.2f.",x1,x2);
        }
        if (delta<0)
            printf("Phuong trinh vo nghiem.");
        if (delta==0)
        {
            x1=x2=-b/2*a;
            printf("Phuong trinh co nghiem kep la: x1=x2=%.2f",x1);
        }
    }
    return 0;
}