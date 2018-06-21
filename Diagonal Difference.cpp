#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,i,j;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(i = 0;i < n;i++){
       for(j = 0;j < n;j++){
          cin >> a[i][j];
       }
    }
    int principal=0, secondary=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j)
                principal=principal+a[i][j];
            if((i+j)==(n-1))
                secondary=secondary+a[i][j];
        }
    }
    
    if((secondary-principal)>=0)
        cout<<(secondary-principal)<<endl;
    else if((secondary-principal)<=0)
        cout<<(principal-secondary)<<endl;
    return 0;
}
