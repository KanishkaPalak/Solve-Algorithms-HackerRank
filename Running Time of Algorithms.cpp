#include <bits/stdc++.h>

using namespace std;
int size;
int runningTime(vector <int> arr) {
    int i, key, j,count=0;
   for (i = 1; i < size; i++)
   {
       key = arr[i];
       j = i-1;
     
       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           count++;
           j = j-1;
       }
      
       arr[j+1] = key;
   }
    return count;
}

int main() {
    int n;
    cin >> n;
    size=n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = runningTime(arr);
    cout << result << endl;
    return 0;
}
