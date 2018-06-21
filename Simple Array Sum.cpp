#include <bits/stdc++.h>

using namespace std;

int simpleArraySum(int n, vector <int> ar) {
    int sum=0;
    for(int j = 0; j < n; j++)
        sum=sum+ar[j];
    return sum;// Complete this function
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0; i < n; i++){
       cin >> ar[i];
    }
    int result = simpleArraySum(n, ar);
    cout << result << endl;
    return 0;
}
