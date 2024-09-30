#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number ";
    cin>>num;
    if(num>=100 && num<=999){
        cout<<"The number entered is three digit number";
    }
    else{
        cout<<"The number entered is not three digit number";
    }
}