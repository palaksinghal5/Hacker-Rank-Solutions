#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n=0,i=0,j=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
        printf(" ");}
        for(k=0;k<i+1;k++)
        {printf("#");}
        printf("\n");
    }
    return 0;

}
