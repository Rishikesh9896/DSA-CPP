#include<iostream>
using namespace std;
int main(){
    float a,b,c,d,e;
    cout<<"Enter the marks in Maths:";
    cin>>a;
    cout<<"Enter the marks in Science:";
    cin>>b;
    cout<<"Enter the marks in English:";
    cin>>c;
    cout<<"Enter the marks in Hindi:";
    cin>>d;
    cout<<"Enter the marks in Economics:";
    cin>>e;
    float percentage = (a+b+c+d+e)*100/500;
    cout<<"The percentage of students in 5 subjects is:"<<percentage<<endl;
    return 0;



} 