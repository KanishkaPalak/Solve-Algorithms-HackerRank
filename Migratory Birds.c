#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int migratoryBirds(int n, int* ar) {
    int i,max,cs[6],pos=0;
    for(i=0;i<6;i++)
    {
        cs[i]=0;
    }
    for(i=0;i<n;i++)
    {
        cs[ar[i]]++;
    }
    max=cs[1];
        for(i=2;i<6;i++)
        {
            if(cs[i]>max)
            {
                max=cs[i];
                pos=i;
            }
        }
    return pos;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = migratoryBirds(n, ar);
    printf("%d\n", result);
    return 0;
}
