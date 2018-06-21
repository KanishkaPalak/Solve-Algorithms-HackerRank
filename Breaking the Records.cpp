#include <bits/stdc++.h>

using namespace std;

vector <int> breakingRecords(vector <int> score) {
    vector<int> rs;
    
    int ch = 0, cl = 0, n = score.size();
    int high = score[0], low = score[0];
    
    for(int i = 1; i < n; i++){
        if(score[i] > high){
            ch++;
            high = score[i];
        }
        else if(score[i] < low){
            cl++;
            low = score[i];
        }
    }
    
    rs.push_back(ch);
    rs.push_back(cl);
    
    return rs;
}

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    vector <int> result = breakingRecords(score);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
