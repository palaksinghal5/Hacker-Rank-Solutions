#include <stdio.h>
int main(){
    int n=0,ar[100][100],i=0,j=0,x=0,y=0,temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    
    for(i=0;i<n;i++){
        x=x+ar[i][i];
        y=y+ar[i][n-1-i];
        
    }
temp=abs(x-y);
printf("%d",temp);

    
    return 0;
}
