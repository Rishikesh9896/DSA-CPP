#include <iostream>
using namespace std;
int main(){
    // 1 2 3 4
    //  1 2 3
    //   1 2
    //    1

    int n;
    cin >>n;
    int i =n;
    while(i>=1){
        int space = 1;
        while(space <= n-i){
            cout << " ";
            space++;
        }
        int j = 1;
        while(j<=i){
            cout << j << " ";
            j++;

        }
        cout << endl;
        i--;
        
    }
}