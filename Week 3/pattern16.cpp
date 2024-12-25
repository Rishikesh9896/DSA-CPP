#include <iostream>
using namespace std;
int main(){
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
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;

    }

    i = n-1;
    while(i>=1){
        int space = n-i;
        int j = 0;
        while(j<=space){
            cout << " ";
            j++;
        }
        j = 1;
        while(j<=i){
            cout << "* ";
            j++;
        }
        cout << endl;
        i--;
    }
}