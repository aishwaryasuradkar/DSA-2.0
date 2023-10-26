#include<iostream>
#include<vector>
using namespace std;


//1. check if array is sorted or not
    bool checkSoreted(int arr[], int size, int i){
        //base case
        if(i >= size){
            return true;

            //ab age check krna padega
            //or wo recursion sambhal lega
            bool aageKaAns = checkSoreted(arr, size, i+1);
            return aageKaAns;
        }
        else{
            //array sorted nahi hai
            return false;
        }


        //rc
        checkSoreted(arr, size, i+1);

        return false;
    }


//2. binary search
    int binarySearch(int arr[], int s, int e, int target){
        //base case
        if(s > e){
            //element not found
            return -101;
        }

        //processing
        int mid = s+(e-s)/2;
        if(arr[mid] == target){
            return mid;

        }
        
        //rc
        //baki recursion dekh lega
        if(arr[mid] < target){
            //right mein jao
            //s = mid+1;
            return binarySearch(arr, mid+1, e, target);
            
        }
        else{
            //left mein jao
            //e = mid-1;
            return  binarySearch(arr, s, mid-1, target);
            

        }
            
    }



//3. Derengemarnt no numbers
    //



//4. find number of ways you can paint n posts
    int getPaintWays(int n, int k){
        //bae case
        if(n == 1){
            return k;
           
        }
        if(n ==2 ){
            return k*(k-1);
        }

    int ans = (k-1) * (getPaintWays(n-1,k) + getPaintWays(n-1,k));
    return ans;
    }


//5. Edit distance



int main(){

//1.
    //int arr[] = {10};
    // int size = 6;
    // int i = 1;

    // bool isSorted = checkSoreted(arr, size, i);
    
    // if(isSorted){
    //     cout <<"Arrray is sorted" << endl;
    // }
    // else{
    //     cout <<"Array is not sorted" << endl;
    // }


//2.
    // int arr[] = {10,20,30,40,50,60,70,80};
    // int size = 8;
    // int s = 0;
    // int e = size-1;
    // int target = 60;

    // int found = binarySearch(arr, s, e, target);
    // if(found != -1){
    //     cout <<"Target found at " << found << "th index"<< endl;
    // }
    // else{
    //     cout <<"Target not found" << endl;
    // }




//4.
    int n = 3;
    int k = 3;
    int ans = getPaintWays(n,k);
    cout << ans << endl;
     
}