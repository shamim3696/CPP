#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, h, count =0;

    cin >> n >> h;

    vector<int> v;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
        if(x > h){
            count += 2;
        }
        else{
            count++;
        }
    }

    cout << count << endl;



    return 0;
}