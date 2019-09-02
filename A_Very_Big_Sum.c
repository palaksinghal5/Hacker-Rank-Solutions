#include <stdio.h>
int main(){
   int n=0,i=0;
   long long ar[10],sum=0;
   scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%lld",&ar[i]);
    sum=sum+ar[i];
}
printf("%lld", sum);
    return 0;
}
