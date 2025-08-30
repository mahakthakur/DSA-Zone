#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
//brute force approach
// int majorityelement(vector<int>nums){
//      int n = nums.size();
//     for(int i : nums){
//          int count=0;
//        for(int j : nums){
//             if(i==j){
//                 count++;
//             }
//         }
//         if(count>n/2){
//         return i;

//     }
//     }
//     return 0;
    
// }
// int main(){
//     vector<int>nums={2,2,1,1,1,1};
//      int result = majorityelement(nums);
//     cout << "The majority element is: " << result << endl;
//     return 0;


// }
// optimize sorting
int majority(vector<int>nums){
    int n= nums.size();
    // sort
    sort(nums.begin(),nums.end());
    int frequency =1, ans=nums[0];
    for(int i=1; i<n;i++ ){
        if(nums[i]==nums[i-1]){
            frequency++;
        }else{
            frequency=1;
            ans= nums[i];
        }
        if(frequency>n/2){
            return ans;
        }


    }
    return 0;

}
int main(){
    vector<int>nums={2,2,1,1,1,1,2};
    int ressult= majority(nums);
    cout<<"the majority element is = " <<  ressult <<endl;
    return 0;
}