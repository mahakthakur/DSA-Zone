#include<iostream>
#include<vector>
using namespace std;
// brute force approach
int maxwater(vector<int>height){
    int maxwater=0;
    int n=height.size();
    for(int i=0; i<n;i++){
        for(int j=i+1;j<n;j++){
            int width=j-i;
            int ht= min(height[i],height[j]);
            int curwater= width*ht;
            maxwater= max(maxwater,curwater);


            
        }

    }
    return maxwater;
}
int main(){
    vector<int>height={1,2,5,6,8,3,4,9};
    int result= maxwater(height);
    cout<<result<<endl;
}


