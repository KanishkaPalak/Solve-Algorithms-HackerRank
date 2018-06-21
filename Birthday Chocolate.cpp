#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int solve(int n, int s_size, int* s, int d, int m){
    int ans = 0, i = 0, sum = 0, start = 0;
    
    while(i < m){
        sum += s[i];
        i++;
    }
    
    if(sum == d){
        ans++;
    }
    
    while(i < n){
        sum += s[i];
        sum -= s[start];
        if(sum == d){
            ans++;
        }
        start++;
        i++;
    }
    
    return ans;
}

int main() {
    int n; 
    scanf("%d", &n);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int d; 
    int m; 
    scanf("%d %d", &d, &m);
    int result = solve(n, n, s, d, m);
    printf("%d\n", result);
    return 0;
}
