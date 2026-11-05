#include<stdio.h>
int main()
{
    char top_char;
    scanf("%c",&top_char);
    
    int n=top_char-'A'+1;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        
        char c='A';
        for(int j=1;j<=i;j++){
            printf("%c",c);
            c++;
        }
        
        c-=2;
        for(int j=1;j<i;j++){
            printf("%c",c);
            c--;
        }
        
        printf("\n");
    }
    return 0;
}