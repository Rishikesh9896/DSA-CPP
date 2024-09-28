#include<iostream>
using namespace std;
int main(){
    char alphabet;
    cout<<"Enter any alphabet ";
    cin>>alphabet;
    if(alphabet>= 'A' && alphabet <= 'Z'){
        cout<<"It is a alphabet";

    }
    else if(alphabet>='a' && alphabet <= 'z'){
        cout<<"It is a alphabet";
    }

    else{
        cout<<"It is not an alphabet";
    }

}