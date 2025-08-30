#include<iostream>
#include<climits>
using namespace std;
// pass by refrence
// void changearr(int arr[],int size){
//     cout<<"in function\n";
//     for(int i=0;i<size;i++){
//         arr[i]=2*arr[i];
//     }
// }
// int main(){
//     int arr[]={1,2,3};
//     changearr(arr,3);
//     cout<<"in main\n";
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<endl;
//     }
//     cout<<endl;
//     return 0;

    // int size=5;
    // int price[5]={100,400,500,900,700};
    // int smallest= INT_MAX;
    // for(int i=0; i<size;i++){
    //     if(price[i]<smallest){
    //         smallest=price[i];

    //     }

    // }
    // cout<<"smallest ="<<smallest<<endl;
    // return 0;
    // int largest= INT_MIN;
    //   int largestindex=0;

    // for(int i=0;i<size;i++){
        
    //     largest=max(price[i],largest);
    //     largestindex=i;
        

    // }
    // cout<<"largest ="<<largest<<endl;
    // cout<<"largestindex  ="<<largestindex<<endl;
    // return 0;
    // linear search
    // int linearsearch(int arr[], int size,int target){
    //     for(int i=0; i<size; i++){
    //     if(arr[i]==target){
    //         return i;
            
    //     }
            
        

    // }
    // return -1;

    // }
    // int main(){
    // int arr[10]={12,17,56,45,34,36,32,22,33,90};
    // int size=10;
    // int target=100;
    
    // cout<<linearsearch(arr,10,100)<<endl;
    // return 0;
    int reversearr(int arr[], int size){
        int start=0;
        int end = size -1;
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;

        }
    }
    int main(){
        int arr[] ={4,2,7,8,1,2,5};
        int size= 7;
        reversearr(arr,7);
        for(int i=0; i<size;i++){

            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return 0;
    }

    









    
