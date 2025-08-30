#include<iostream>
using namespace std;
double mypow(double x , int n){
    if(n==0){
        return 1.0;
    }
    if(x==0){
        return 0.0;

    }
    if(x==1){
        return 1.0;
    }

    long binform=n;
    double ans =1.0;
    if(n<0){
        x=1/x;
        binform = -binform;
    }
    while(binform>0){
        if(binform%2==1){
            ans *= x;

        }
        x*=x;
        binform/=2;

    }
    return ans;
}
int main(){
    // binary exponentiation = power ki binary form ke digit ke uper loop lagaenge time complexity = logn
double x = 2;
int n = -2;
 double result =mypow(2,-2);
 cout << x << " raised to the power of " << n << " is: " << result <<endl;




    
}