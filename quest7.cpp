#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int count = 0;
    if(n==0){
        count = 1;
    }
    while(n>0){
        count++;
        n /= 10;
    }
    cout<<"The total number of digits in the entered number is:"<<count; 
    return 0;
}