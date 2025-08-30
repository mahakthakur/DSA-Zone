#include<iostream>
#include<vector>
using namespace std;

    // vector<int> vec;//0 size
    // cout<<vec[0];
    // return 0;
    // vector<int>vec (5,0);
    // cout<<"size ="<<vec.size()<<endl;
    // // 
    // for(int i: vec){
    //     cout<<i<<endl;
    // }
    // return 0;
    // vector<int>vec;
    // vec.push_back(0);
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;
    // return 0;
int singlenumber(vector<int>&nums){
   int ans=0;
   for(int val: nums){
    ans^=val;
    cout<<ans<<endl;

   }
   return 0;
}
