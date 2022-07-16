#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter for how many numbers you want the sum (Only even):";
    cin>>n;
    int k = 2;
    int sum = 0;
    int count = 1;
    while(count<=n){
        sum += k;
        k += 2;
        count++;
    }
    cout<<"Result = "<<sum;
    return 0;
}