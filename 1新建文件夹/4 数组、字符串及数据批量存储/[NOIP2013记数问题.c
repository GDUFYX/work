#include<stdio.h>
 int main(){
     long long n;
     int x;
     
     if(scanf("%lld%d",&n,&x)!=2){
         return 0;
     }
     
     long long count=0;
     long long factor=1;
     long long low=0;
     long long cur=0;
     long long high=0;
     
     while(n/factor!=0){
         low=n%factor;
         cur=(n/factor)%10;
         high=n/(factor*10);
         
         if(x!=0){
             if(cur>x){
                 count+=(high+1)*factor;
             }else if(cur<x){
                 count+=high*factor;
                     }else{
                 count+=high*factor+low+1;
             }
                 }else{
             if(high>0){
                 if(cur>0){
                     count+=high*factor;
                 }else{
                     count+=(high-1)*factor+low+1;
                 }
             }
         }
         factor*=10;
             }
        printf("%lld\n",count);
         return 0;
 }