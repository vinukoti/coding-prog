#include<stdio.h>
void main()
{
    int a[12];
    int i;
    a[0]=0;
    a[1]=1;
    for(i=2;i<12;i++)
        a[i]=a[i-2]+a[i-1];
    for(i=0;i<12;i++)
        printf("%d\t",a[i]);
}
