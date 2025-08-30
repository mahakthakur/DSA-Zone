#include<iostream>
using namespace std;

    int sumN(int n) {
        int s= 0;
        for(int i=1;i<=n; i++){
            s+=i;
        }
        return s;
        
    }
    int factorial(int n){
        int fact=1;
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        return fact;
    }
    int minoftwo(int a,int b){
        if(a<b){
            return a;
        }else{
            return b;
        }

    }
    int sumofdigit(int num)
    {
        int digitsum=0;
        while(num>0){
            int lastdigit=num%10;
            num/=10;
            digitsum+=lastdigit;
        }
        return digitsum;

        }
  
    int main(){
        // cout<<sumN(10);
        // cout<<factorial(5);
        cout<<sumofdigit(54);
        return 0;
    }

