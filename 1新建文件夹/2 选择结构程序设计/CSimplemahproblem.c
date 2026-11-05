#include<stdio.h>
int main()
{
    long long X,Y,Z;
    scanf("%lld%lld",&X,&Y);
    
    Z=(Y%X==0)?(X+Y):(Y-X);
    printf("%lld",Z);
    return 0;
}