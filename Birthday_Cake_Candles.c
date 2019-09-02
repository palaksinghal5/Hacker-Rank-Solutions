#include<stdio.h>
int main(){
    long n=0,i=0,j=0,max=0,count=0;
    int x=1;
    scanf("%d",&n);
    long ar[100000];
    for(i=0;i<n;i++){
        scanf("%ld",&ar[i]);
        if(max<ar[i]){max=ar[i];}
    }
    for(i=0;i<n;i++){if(ar[i]==max){count++;}}
    
    printf("%d",count);
    return 0;
}
