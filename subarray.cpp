#include<iostream>
#include<limits.h>
using namespace std;
// Maximum Subarray sum
int main(){
int n=7;

// int arr[5]={1,2,3,4,5};
// // brute force approach its time complexity is 0(n2)
// int maxsum= INT_MIN;
// for(int st=0; st<n; st++){
//     int currsum=0;
//     for(int end=st; end<n;end++){
//         for(int i=st;i<=end ;i++){
//             currsum+=end;
//             maxsum= max(currsum,maxsum);
          
//         }

//     }
     
// }
// cout<<"max od sub array ="<<maxsum<<endl;
// return 0;
// kadanes algorithm // time complexity 0(n)
int arr[7]= {3,-4,5,4,-1,7,-8};
int cursum=0;
int maxsum= INT_MIN;
for(int i=0; i<n; i++){
    cursum +=arr[i];
    maxsum= max(cursum,maxsum);
    if(cursum<0){
        cursum=0;

    }
}
cout<<maxsum<<endl;
return 0;


}

