#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) 
{
    int count=0,k=n;
    if(n%2!=0)
    {
        if(p<(n+1)/2)
        {
            //from front
            while(count!=p)
                count++;            
        }
        else
        {
            //from end
            while(k!=p)
            {
                count++;
                k--;
            }
        }
    }
    else
    {
        if(p<=n/2)
        {
            //from front
            while(count!=p)
                count++; 
        }
        else
        {   
            //from end
            count=1;
            while(k!=p)
            {
                count++;
                k--;
            }
        }
    }
    return count/2;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
