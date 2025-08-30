#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={2,5,7,11,15};
    vector<int>ans;
    int target=26;
    int i=0, j=0;
    while(i<j){
        int pairsum=nums[i]+nums[j];
        if(pairsum<target){
            i++;
        }else
        if(pairsum>target){
            j--;
        }else 
        if(pairsum=target){
            ans.push_back(i);
            ans.push_back(j);
           
            
        }


    }
     cout<<ans[i]<<" ,"<<ans[j]<<endl;
    
    return 0;

}