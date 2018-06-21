#include <bits/stdc++.h>

using namespace std;
int size;
int introTutorial(int V, vector <int> arr) {
    int i,pos=-1;
    for(i=0;i<size;i++)
    {
        if(arr[i]==V)
        {pos=i;
            break;}
    }
    return pos;
}
int main() {
    int V;
    cin >> V;
    int n;
    cin >> n;
    size=n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = introTutorial(V, arr);
    cout << result << endl;
    return 0;
}
