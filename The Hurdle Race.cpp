#include <iostream>
using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    int max=height[0];
    for(int i=0;i<n;i++)
    {
        if(height[i]>=max)
            max=height[i];
    }
    if(k<max)
    {
        cout<<(max-k)<<endl;
    }
    else
        cout<<"0"<<endl;// your code goes here
    return 0;
}
