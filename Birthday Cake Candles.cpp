#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    int max, ans=0;
    max=ar[0];
    for(int i=0;i<n;i++)
    {
        if(ar[i]>=max)
            max=ar[i];
    }
    for(int k=0;k<n;k++)
    {
        if(ar[k]==max)
            ans=ans+1;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
