#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter the first number "<<endl;
    cin>>num1;
    int num2;
    cout<<"Enter the second number "<<endl;
    cin>>num2;
    int num3;
    cout<<"Enter the third number "<<endl;
    cin>>num3;
    if(num1>num2 && num1>num3){
        cout<<"The first number is greatest";
    }
    else if(num2>num3 && num2>num1){
        cout<<"The second number is greatest";

    }
    else{
        cout<<"The third number is greatest";
    }
    

}