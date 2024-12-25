#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin >>n;
    cin >>m;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=m){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}