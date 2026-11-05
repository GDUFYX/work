#include<stdio.h>
int main(){
 int L,M;
    if(scanf("%d %d",&L,&M)!=2){
        return 0;
    }
    
    int a[10005];
    for(int i=0;i<=L;i++){
        a[i]=1;
    }
    
    for(int i=0;i<M;i++){
        int l,r;
        scanf("%d%d",&l,&r);
        
        for(int j=l;j<=r;j++){
            a[j]=0;
        }
    }
    
    int count=0;
    for(int i=0;i<=L;i++){
        if(a[i]==1){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}