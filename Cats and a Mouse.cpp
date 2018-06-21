#include <iostream>

using namespace std;


int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        
        if(y>x && y<=z)
            cout<<"Cat B"<<endl;
        else if(x>y && x<=z)
            cout<<"Cat A"<<endl;
        else if(z>=x && z<=y)
        {
            if((z-x)==(y-z)){cout<<"Mouse C"<<endl;}
            else if((z-x)<(y-z)){cout<<"Cat A"<<endl;}
            else{cout<<"Cat B"<<endl;}
        }
        else if(z>=y && z<=x)
        {
            if((x-z)==(z-y)){cout<<"Mouse C"<<endl;}
            else if((x-z)<(z-y)){cout<<"Cat A"<<endl;}
            else{cout<<"Cat B"<<endl;}
        }
        else if(x>=z && y>=z)
        {
            if((x-z)==(y-z)){cout<<"Mouse c"<<endl;}
            else if((x-z)<(y-z)){cout<<"Cat A"<<endl;}
            else{cout<<"Cat B"<<endl;}
        }
         else if(z>=x && z>=y)
        {
            if((z-x)==(z-y)){cout<<"Mouse C"<<endl;}
            else if((z-x)<(z-y)){cout<<"Cat A"<<endl;}
            else{cout<<"Cat B"<<endl;}
        }
            
    }
    return 0;
}
