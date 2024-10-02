#include<iostream>
using namespace std;
int main(){
    float length, breadth;
    cout<<"Enter the length of rectangle ";
    cin>>length;
    cout<<"Enter the breadth of rectangle ";
    cin>>breadth;
    float area, perimeter;
    area = length*breadth;
    perimeter = 2*(length+breadth);
    cout<<"The area of rectangle is "<<area<<endl;
    cout<<"The perimeter of rectangle is "<<perimeter<<endl;
    if(area > perimeter){
        cout<<"The area of rectangle is greater than its perimeter";
    }
    else{
        cout<<"The perimeter of rectangle is greater than its perimeter";
    }
    
}