#include<iostream>
using namespace std;
int main(){
    float a, b, c;
    cout<<"Enter the first side of triangle";
    cin>>a;
    cout<<"Enter the second side of triangle";
    cin>>b;
    cout<<"Enter the third side of triangle";
    cin>>c;
    if(a+b>c && a+c>b && b+c>a){
        if(a==b && b==c){
            cout<<"It is an equilateral triangle";
        }
        else if(a==b || b==c || a==c){
            cout<<"It is an isosceles triangle";
        }
        else {
            cout<<"The triangle is scalene";
        }

    }
    else{
        cout<<"It is not a triangle";
    }
    


}