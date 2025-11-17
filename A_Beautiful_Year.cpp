#include<bits/stdc++.h>
uisng namespace std;

int main(){

    int y;

    cin >> y; // year

    if(y%4==0 && y%100!=0 || y%400==0){
        cout << "12.09." << y << endl;
    }
    else{
        cout << "13.09." << y << endl;
    }

    

    return 0;
}