#include <iostream>
using namespace std;

int main() {
    int n = 3;
    // for (int i = 1; i <= n; ++i) {
    //     for (int j = 1; j <= i; ++j) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // return 0;
    // for(int i=0;i<n;i++){
    //     char ch= 'A';
    //     for (int j=0; j<n;j++){
    //     cout<<ch;
    //     ch=ch+1;
    //     }
    //      cout<<endl;
    // }
    // return 0;
    // int num=1;
    // for(int i=0; i<n;i++){
    //     for(int j=0; j<n;j++) ; {
    //         cout<<num<<" ";
    //         num++;
    //     }
    
    // }
    // 
    // return 0;




    int count = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;


}
