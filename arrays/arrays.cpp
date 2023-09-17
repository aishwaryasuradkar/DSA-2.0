#include<iostream>
using namespace std;

int main(){

    //array

    // int arr[101];
    // char ch[102];
    // bool flag=[223];
    // long num[900];
    // short snum[1000];
    // cout<<"Array created successfully"<< endl;

//start of array
    
    // int a=5;
    // cout<<"Address of a is:"<< &a << endl;
    // cout<<"Size of a:" << sizeof(a)<< endl;

    // int arr[100];
    // cout<<"Base address of arr is:"<< &arr<< endl;
    // cout<<"Base address of arr is:"<< arr<< endl; // as arr simply is or refers to base address no need to use ampersend(&->address of)
    // cout<<"Size of arr is:"<< sizeof(arr) << endl;


// //ARRAY INITIALIZATION
//     //1.
//     int arr[]={1,2,3,4,5};
//     //2.
//     int brr[5]{1,2,3,5,3};
//     //3.
//     int crr[5]={2,3};
//     //4.error
//     int drr[2]={1,2,3,4,5};


//ACCESSING INDEX
    // int arr[5]={3,5,7,4,9};
    // cout<<arr[0]<<endl; 
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    // cout<<arr[4]<<endl;

    // int arr[5]={3,5,7,4,9};
    // int n=5;
    // for(int i=0;i<n;i++){
    //     cout<< arr[i]<< endl;
    // }

//TAKING INPUT
    // int arr[5];
    // int n=5;
    // for(int i=0; i<n; i++){
    //     cout<<"Enter the valur for index:"<<i<< endl;
    //     cin>> arr[i];
    // }
    // //printing the array
    // cout<<"Prining the array:"<< endl;

    // for(int i=0; i<n; i++){
    //     cout<< arr[i] << " ";
    // }

//1. take i/p for an array, then double the elements 
    //    int arr[10];
    // int n=10;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    
    // //printing the array after input
    // cout<<"printing the array after input"<< endl;
    // for(int i=0; i<n; i++){
    //     cout<< arr[i]<< " "<< endl;
    // }
    
    // //double-up
    // cout<<"Doubles:"<< endl;
    // for(int i=0; i<n; i++){
    //     arr[i]= arr[i]*2;
    // }
    
    // //printing the array afterdoubling
    // cout<<"printing the array after doubling";
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<< " "<< endl;
    // }


//2.PRINTING SUM
//    int arr[5];
//    cout<<"Enter the input:"<< endl;
//    //input
//    int n=5;
//    for(int i=0; i<n; i++){
//        cin>> arr[i];
//    }

//    //printing their sum
//    int sum=0;
//    for(int i=0; i<n; i++){
//        sum= arr[i]+ sum;
     
//    }
//      cout<< "Sum is:" <<sum << endl;

    return 0;
}