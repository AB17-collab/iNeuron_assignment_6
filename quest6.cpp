#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number whose factorial you want:";
    cin>>n;
    int factorial = 1;
    while(n>0){
        factorial = (factorial*n)%1000000007;
        n--;
    }
    cout<<"The factorial of the given number is:"<<factorial;   
    return 0;
}