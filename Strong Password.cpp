#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) 
{
    // Return the minimum number of characters to make the password strong
    int i,sp=0,num=0,eu=0,el=0,count=0,k;
    for(i=0;i<n;i++)
    {   k=password[i];
        if(k>='A' && k<='Z')
            eu++;
        else if(k>='a' && k<='z')
            el++;
        else if(k>='0' && k<='9')
            num++;
        else if(k=='!' || k=='@' || k=='#' || k=='$' || k=='%' || k=='^' || k=='&' || k=='*' || k=='(' || k==')' || k=='-' || k=='+')
            sp++;
    }
    if(eu==0)   count++;
    if(el==0)   count++;
    if(sp==0)   count++;
    if(num==0)  count++;
    if((count+n)<6) return (6-n);
    else    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
