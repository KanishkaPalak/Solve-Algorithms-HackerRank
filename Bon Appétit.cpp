#include <iostream>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,n,k;
    int b;
   
    cin>>n>>k;
    vector <int> bill(n);
    for(i=0;i<n;++i)
        cin>>bill[i];
   
    cin>>b;
    int charge=0;
    for(i=0;i<n;++i)
        charge+=bill[i];
    
    charge-=bill[k];
    charge/=2;
   // charge=(int)charge;
    if(charge==b)
        cout<<"Bon Appetit";
    else 
        cout<<(b-charge);
    return 0;
}
