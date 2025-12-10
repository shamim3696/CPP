// Problem statement: First I will take input for Base then an integer N. I have to convert it to its equivalent value in decimal.

#include<bits/stdc++.h>

using namespace std;

int main(){
    int B,N;
    cout << "Enter two integers: "<<endl;;
    cin>>B>>N;
   
    int ans = 0;
    int power = 0;
    
    while(N>0){
        int rem = N % 10;
        N = N / 10;
        int powValue = pow(B, power);
        int value = rem * powValue;
        power++;
        ans += value;

    }
    cout << "Decimal value is: "<<ans<<endl;

    return 0;
}