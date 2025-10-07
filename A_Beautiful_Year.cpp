#include<bits/stdc++.h>

using namespace std;

int main() {
    int year;
    cin >> year;

    while(1){
        year++;
        string year_str = to_string(year);

        set<char> year_set(year_str.begin(), year_str.end());

        int len1 = year_str.length();
        int len2 = year_set.size();

        if(len1 == len2){
            cout << year << endl;
            break;
        }

    }

    return 0;
}
