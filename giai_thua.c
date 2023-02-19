#include <stdio.h>
#include <math.h>
int main()
{
    int i,N,n;
    printf("Nhap so N:");
    scanf("%d",&N);
    i=1;
    n=1;
    while (i<N)
    {
        i=++i;
        n=n*i;
    }
    printf("%d giai thua bang: %d",N,n);
    return 0;
}