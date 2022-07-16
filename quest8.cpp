#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to check if it's prime or not: ";
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            break;
        }
    }
    if(i==n)
        cout<<"Prime Number";
    else
        cout<<"Composite Number";  
    
    return 0;
}