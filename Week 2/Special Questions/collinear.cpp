#include<iostream>
using namespace std;
int main(){
    float x1, x2, x3, y1, y2, y3;
    cout<<"Enter the x1 coordinate"<<endl;
    cin>>x1;
    cout<<"Enter the y1 coordinate"<<endl;
    cin>>y1;
    cout<<"Enter the x2 coordinate"<<endl;
    cin>>x2;
    cout<<"Enter the y2 coordinate"<<endl;
    cin>>y2;
    cout<<"Enter the x3 coordinate"<<endl;
    cin>>x3;
    cout<<"Enter the y3 coordinate"<<endl;
    cin>>y3;
    float m1 = (y2-y1) / (x2-x1);  // formula of slope
    float m2 = (y3-y2) / (x3-x2);
    if(m1 == m2){
        cout<<"The points lies on straight line";

    }
    else{
        cout<<"The points does not lie on straight line";
    }

    
    
}