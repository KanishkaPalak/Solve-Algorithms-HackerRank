#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int arr[5];
    long int sum=0,cmp[5];
    for(int i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
    }
    for(int j=0;j<5;j++)
    {
        sum=0;
        for(int k=0;k<5;k++)
        {
            sum=sum+arr[k];
        }
        cmp[j]=(sum-arr[j]);
    }
        
    long int min=cmp[0];
    for(int m=0;m<5;m++)
    {
        if(min>=cmp[m]){
            min=cmp[m];}
    }
    printf("%ld ",min);
    long int max=cmp[0];
       
    for(int m=0;m<5;m++)
    {
        if(cmp[m]>=max){
            max=cmp[m];}
    }
    
    printf("%ld",max);
    return 0;
}
