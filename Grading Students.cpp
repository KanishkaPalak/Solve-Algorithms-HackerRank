#include <bits/stdc++.h>

using namespace std;
int n;
/*
 * Complete the gradingStudents function below.
 */
vector<int> gradingStudents(vector<int> grades) 
{
    int i,rem;
    for(i=0;i<n;i++)
    {
        if(grades[i]<38)
            continue;
        rem=grades[i]%10;
        if( rem>5 && (10-rem)<3)
            grades[i]+=(10-rem);
        else if(rem<5 && (5-rem)<3)
            grades[i]+=(5-rem);
    }
    return grades;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

   // int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> grades(n);

    for (int grades_itr = 0; grades_itr < n; grades_itr++) {
        int grades_item;
        cin >> grades_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        grades[grades_itr] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];

        if (result_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
