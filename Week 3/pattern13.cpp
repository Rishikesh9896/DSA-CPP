#include <iostream>
using namespace std;
int main(){
//      1
//     A B
//    1 2 3
//   A B C D

int n;
cin >>n;
int i =1;
while(i<=n){
    int spaces = n - i;
    int j = 0;
    while(j<= spaces){
        cout << " ";
        j++;
    }
    
    if(i%2 != 0){
        int j = 1;
        while(j<=i){
            cout << j << " ";
            j++;
        }
    }
    else{
        char ch = 'A';
        int j = 1;
        while(j<= i){
            cout << ch << " ";
            ch++;
            j++;
        }
        
    }
    cout << endl;
    i++;
}


}