#include<stdio.h>
int main(){
 int n,k,m;
    
    if(scanf("%d %d %d",&n,&k,&m)!=3){
        return 0;
    }
    int a[110];
    for(int i=0;i<n;i++){
        a[i]=1;
    }
    
    int current=k;
    int remain=n;
    
    while(remain>1){
        int count=0;
        
        while(1){
            if(a[current]==1){
                count++;
                if(count==m){
                    break;
                }
            }
            current=(current+1)%n;
        }
        a[current]=0;
        remain--;
        
        current=(current+1)%n;
    }
    
    for(int i=0;i<n;i++){
        if(a[i]==1){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}