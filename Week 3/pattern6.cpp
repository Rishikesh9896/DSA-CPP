#include <iostream>
using namespace std;
int main(){
    
    //    1
    //   1 2
    //  1 2 3
    // 1 2 3 4


    int n;
    cin >>n;
    int i = 1;
    while(i<=n){
        int space = n-i;
        int j = 0;
        while(j <space){
             cout << " ";
             j++;
        }
        j = 1;
        while(j<=i){
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

}