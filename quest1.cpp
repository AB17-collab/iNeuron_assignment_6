#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter for how many numbers you want the sum:";
    cin>>n;
    int sum = 0;
    while(n>0){
        sum += n;
        n--;
    }
    cout<<"Result = "<<sum;
    return 0;
}