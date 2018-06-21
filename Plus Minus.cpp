#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,i;
    double pos=0,neg=0,zero=0;
    scanf("%d",&n);
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
            pos=pos+1.0;
        else if(arr[i]<0)
            neg=neg+1.0;
        else if(arr[i]==0)
            zero=zero+1.0;
    }
   
    printf("%lf",(pos/n));
    cout<<endl;
    printf("%lf",(neg/n));
    cout<<endl;
    printf("%lf",(zero/n));
    return 0;
}
