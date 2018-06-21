#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
int i, ans=0,count=0,valley=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='U')
            count++;
        else
            count--;
        if(count<0)
        {   
            if(valley==0)
            {
                valley=1;
                ans++;
            }
        }
        else
        {
            valley=0;
        }
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
