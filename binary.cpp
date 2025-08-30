#include<iostream>
using namespace std;
int dectobin(int n){
    int ans=0;
    int pow=1;
    while(n>0){
        int rem= n%2;
        int n=  n/2;
        ans=(rem*pow);
        pow=pow*10;
    }
    return ans;
    
}
int bintodec(int n){
    
}
int main(){
    cout<<dectobin(9);
    return 0;
      


}
