#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    if(num%5==0){
        cout<<"The number is divisible by 5 ";
    }
    else{
        cout<<"The number is not divisible by 5";
    }
}