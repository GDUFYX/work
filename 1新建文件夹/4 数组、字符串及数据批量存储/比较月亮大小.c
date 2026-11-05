#include<stdio.h>
int main(){
    int n;
    if(scanf("%d",&n)!=1)
        return 0;
    int a[100005];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    if(n==1){
        printf("-1\n");
        return 0;
    }
    
    int last=a[n-1];
    int prev=a[n-2];
    
    if(last==15){
        printf("DOWN\n");
    }else if(last==0){
        printf("UP\n");
    }
    
    else if(last>prev){
        printf("UP\n");
    }else{
        printf("DOWN\n");
    }
    return 0;
}