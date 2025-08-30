#include<iostream>
using namespace std;
int main(){
    
    // cout<<marks[1]<<endl;
    //   cout<<marks[2]<<endl;
    int size=100;
    int marks[size];
    // cout<<sizeof(marks)/sizeof(int)<<endl;
    for(int i;i<size;i++){
        cin>>marks[i];
    }
    for(int i=0;i<size;i++){
        cout<<marks[i]<<endl;
    }

    return 0;

}