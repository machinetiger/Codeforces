#include<stdio.h>
#include<math.h>
int main()
{
    long long int m,n,a,x,y;
    scanf("%lld%lld%lld",&m,&n,&a);

    x = n / a;
    y = m / a;

    if (n % a != 0)
        x = x + 1;

    if (m % a != 0)
        y = y + 1;

    printf("%lld", x*y);

    return 0;
}
