#include <stdio.h>
int main(){
    int n;                    //for any value of n
    int i=0,j=0,temp=0;
    long sum=0,su=0;
    scanf("%d",&n);
int ar[n];
for(i=0;i<n;i++)
{scanf("%d",&ar[i]);}
for(i=0;i<n;i++){
    for(j=0;j<n;j++)
    {
        if(ar[i]<ar[j])
        {
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
        }
    }
}
for(i=0;i<n-1;i++){sum=sum+ar[i];}
for(j=1;j<n;j++){su=su+ar[j];}
printf("%ld %ld",sum,su);
return 0;
}
                    -------------------------
#include <stdio.h>
int main(){
    
    int i=0,j=0,temp=0;                       //specifically for n=5
    long sum=0,su=0;
int ar[5];
for(i=0;i<5;i++)
{scanf("%d",&ar[i]);}
for(i=0;i<5;i++){
    for(j=0;j<5;j++)
    {
        if(ar[i]<ar[j])
        {
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
        }
    }
}
for(i=0;i<4;i++){sum=sum+ar[i];}
for(j=1;j<5;j++){su=su+ar[j];}
printf("%ld %ld",sum,su);
return 0;
}
