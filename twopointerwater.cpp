#include<iostream>
#include<vector>
using namespace std;
int maxwater(vector<int>height){
    int lp=0;
    int n= height.size();
    int rp=n-1;
    int ans=0;
    while(lp<rp){
        int w =rp-lp;
        int ht= min(height[lp],height[rp]);
        int curwater  =w*ht;
        ans= max(ans,curwater);
        height[lp]<height[rp]? lp++ :rp--;

    
    }
     return ans;




}
int main(){
    vector<int>height={1,2,5,6,8,3,4,9};
    int result= maxwater(height);
    cout<<result<<endl;
}
    
