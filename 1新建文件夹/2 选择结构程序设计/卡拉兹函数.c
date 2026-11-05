#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    if(n%2!=0){
        printf("%d\n",3*n+1);
    }
    else{
        printf("%d\n",n/2);
    }
    return 0;
}