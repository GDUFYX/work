#include<stdio.h>
int main()
{
    int i,j;
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<i+1;j++)
        {
            printf("%d*%d=%2d",j,i,i*j);
            if(j<i)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}