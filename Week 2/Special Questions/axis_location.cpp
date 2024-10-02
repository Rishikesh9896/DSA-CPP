#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter the x coordinate";
    cin>>x;
    cout<<"Enter the y coordinate";
    cin>>y;

    if(x==0 && y==0){
        cout<<"The point lies on origin "<<endl;
    }
    else if(x ==0){
        cout<<"The point lies on y axis"<<endl;
    }
    else if(y ==0){
        cout<<"The point lies on x axis "<<endl;
    }
    else{
        cout<<"The point lies in the plane bbut not on any axis"<<endl;
    }
}