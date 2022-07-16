#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number you would like to reverse:";
    cin>>n;
    string k = to_string(n);
    reverse(k.begin(),k.end());
    n = stoi(k);
    cout<<"The reversed number is:"<<n; 
    return 0;
}