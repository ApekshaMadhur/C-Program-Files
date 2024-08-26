#include<stdio.h>
int main()
{
    int a,b,m,n,rem,lcm,gcd;
    printf("\n enter two numbers");
    scanf("%d %d",&m,&n);
    a=m;
    b=n;
    while (n!=0)
    {
        rem=m%n;
        m=n;
        n=rem;
    }

    gcd=m;

    lcm=(a*b)/m;
    printf("\n gcd of the given two number =%d",m);
    printf("\n lcm of the given number =%d",lcm);
    return 0;

}
