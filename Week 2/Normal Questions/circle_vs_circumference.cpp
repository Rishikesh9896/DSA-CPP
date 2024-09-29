#include<iostream>
using namespace std;
int main(){
    float radius;
    cout<<"Enter the radius ";
    cin>>radius;
    float area = 3.14*radius*radius;
    cout<<"The area of circle is "<<area<<endl;
    float circum = 2*3.14*radius;
    cout<<"The circumference of circle is "<<circum<<endl;
    if(area>circum){
        cout<<"The area of circle is greater than its circumference ";
    }
    else{
        cout<<"The circumference of circle is greater than its area";
    }

}