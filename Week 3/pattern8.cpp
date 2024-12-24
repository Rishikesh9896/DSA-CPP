#include <iostream>
using namespace std;
int main(){
    // A
    // AB
    // ABC
    
    int n;
    cin >>n;
    int i = 1;
    while(i<=n){
        int space = n-i;
        int j = 0;
        while(j<= space){
            cout << " ";
            j++;
        }
        j = 1;
        char ch = 'A';
        while(j<=i){
            
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }



    
}