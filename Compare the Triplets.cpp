#include <bits/stdc++.h>
using namespace std;
void solve(int a0, int a1, int a2, int b0, int b1, int b2){
    int Alice=0, Bob=0;
    if(a0<b0)
        Bob++;
    else if(a0>b0)
        Alice++;
    if(a1<b1)
        Bob++;
    else if(a1>b1)
        Alice++;
    if(a2<b2)
        Bob++;
    else if(a2>b2)
        Alice++;
    
    cout<<Alice<<" "<<Bob<<endl;
    
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    solve(a0, a1, a2, b0, b1, b2);
    return 0;
}
