#include <iostream>
using namespace std;
int main(){
//        1
//       0 1
//      1 0 1
//     0 1 0 1

int n;
cin >>n;
int i = 1;
while(i<=n){
    int space = n-i;
    int j = 0;
    while(j<=space){
        cout << " ";
        j++;
    }
     j = 1;
    while(j<=i){
        if((i+j)%2 == 0){
            cout << "1 ";
        }
        else{
            cout << "0 ";
        }
        j++;
    }
    cout << endl;
    i++;
}





}