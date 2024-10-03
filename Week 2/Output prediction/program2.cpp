#include<iostream>
using namespace std;
int main(){ 
float a = 5, b = 2; 
int c; 
c = a % b; 
cout<<c; 
return 0; 
}

// will give an error because we are declaring value of a and b as float and giving the result as integer which is not true and compiler will give an error.