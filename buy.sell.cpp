#include<iostream>
#include<vector>
using namespace std;
int buyandselll(vector<int>price){
    int maxprofit =0;
    int n= price.size();
    int bestbuy= price[0];
    for(int i=1;i<n;i++){
        if(price[i]>bestbuy){
            maxprofit= max(maxprofit,price[i]-bestbuy);
        }else{
        bestbuy=min(bestbuy,price[i]);
        }
    }
    return maxprofit;

}
int main(){
    vector<int>price={7,1,5,3,6,4};
    int result= buyandselll(price);
    cout<<result<<endl;
}

