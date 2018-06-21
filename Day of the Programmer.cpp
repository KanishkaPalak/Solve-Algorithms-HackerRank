#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
string solve(int year) 
{
    int years=year;
    string str;
    std::string y = std::to_string(year);
    if(years<1918)
    {
        if(years%4==0)
            str="12.09."+y;
        else
            str="13.09."+y;
    }
    else if(years>1918)
    {
       
        if((years%4==0 && years%100!=0)||(years%400==0))
            str="12.09."+y;
        else
            str="13.09."+y;
    }
    else
    {
        str="26.09."+y;
    }
    return str;
}
//230 if not a leap year-august completed: +26 sept
//231 if a leap year-august completed: +25 sept
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int year;
    cin >> year;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = solve(year);

    fout << result << "\n";

    fout.close();

    return 0;
}
