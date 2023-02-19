#include <stdio.h>
void main(void)
{
    float a,b,x;
    printf("Nhap so a: ");
    scanf("%f",&a);
    printf("Nhap so b: ");
    scanf("%f",&b);
    if (a!=0)
        {   
            x=-b/a;
            printf("Nghiem cua phuong trinh la: %.2f",x);
            }
        else
            if (b==0)
                printf("Phuong trinh vo so nghiem");
                else
                    printf("Phuong trinh vo nghiem");
                
    }                                                         