#include<stdio.h>
int main()
{
    int n, i, Petya, Vasya, Tonya, count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&Petya,&Vasya,&Tonya);
        if(Petya+Vasya+Tonya >= 2)
            count++;
    }
    printf("%d",count);
    return 0;
}
