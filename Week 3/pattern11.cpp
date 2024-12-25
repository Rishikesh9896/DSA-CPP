#include <iostream>
using namespace std;
int main(){
    //   1
     // 1 3
     //1 3 5
    int n;
    cin >>n;
    int i = 1;
    while(i<=n){
        int space = n-i;
        int j =0;
        while(j<=space){
            cout << " ";
            j++;
        }

         j = 1;
        int odd = 1;
        while(j<=i){
          cout << odd << " ";
          odd = odd + 2;
          j++;
        }
        cout << endl;
        i++;
    }
}
