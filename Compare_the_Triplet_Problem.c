#include <stdio.h>
int main(){
    int a[100], b[100], c[2],i=0,x=0,y=0;
for(i=0;i<3;i++){
    scanf("%d",&a[i]);

}
for(i=0;i<3;i++){
    scanf("%d",&b[i]);
    
}
for(i=0;i<3;i++){
    if(a[i]>b[i]){ x=x+1;}
    else if(b[i]>a[i]){y=y+1;}

}
c[0]=x;
c[1]=y;

printf("%d %d",c[0],c[1]);
return 0;
}
