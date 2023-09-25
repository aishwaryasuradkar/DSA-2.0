#include<iostream>
using namespace std;


//1.FINd QUOTIENT USING BINARY SEARCH
    // int getQuotient(int divisor, int dividend){
    //     int s =0;
    //     int e = dividend;
    
    //     int ans=-1;

    //     while( s<=e ){
    //         int mid= s+(e-s)/2;

    //         cout<<"s:" << s<<  " e:" << e<<endl;

    //         if(mid * divisor == dividend ){
    //             return mid;
    //         }
    //         else if(mid * divisor < dividend){
    //             //ans la store kara
    //             //ani right la ja
    //             ans = mid;
    //             s= mid+1;

    //         }
    //         else{
    //             //left la ja 
    //             e= mid-1;
    //         }
    //     }
    // return ans;
    //}





//2. BINARY SEARCH ON NEARLY SORTED ARRAY
    // int searchNearlySorted(int arr[], int size, int target){
    //     int s=0;
    //     int e=size-1;
    //     //int ans= -1;

    //     while(s <= e){
    //         int mid= s+(e-s)/2;
    //         if(mid-1>=0 && arr[mid-1] == target){
    //             return mid-1;
    //         }
    //         if(arr[mid]== target){
    //             return mid;
    //         }
    //         if(mid+1< size && arr[mid+1] == target){
    //             return mid+1;
    //         }
    //         if(target > arr[mid]){
    //             //right la ja
    //             s= mid+2;
    //         }
    //         if(target < arr[mid] ){
    //             //Left la ja
    //             e = mid-2;
    //         }
    //         mid= s+(e-s)/2;
    //     }
    //     return -1;
    // } 




//3.FIND ODD OCCURING ELEMENT
    int findOddOccuringElement(int arr[], int n){
        int s=0;
        int e=n-1;
       
        int ans=-1;

        while(s <= e){
             int mid= s+(e-s)/2;

            //single wlement 
            if(s==e){
                return s;
            }

            //mid check -> even or odd
            if(mid & 1){
                //mid&1 -> if true -> tr number odd ahe
                if(mid-1 >= 0 && arr[mid] == arr[mid-1]){
                    //right la ja
                    s = mid+1;
                }
                else{
                    //left la ja
                    e=mid-1;
                }


            }
            else{
                //even
                if(mid+1 < n && arr[mid] == arr[mid+1]){
                    //also mid+1 already checked zalay mhnun -2
                    
                    s = mid-2;

                }
                else{
                    //ektar mid ch ans ahe or
                    //right la ahe apan
                    //so left la ja
                    e =mid;
                }
            }

        }
        return -1;
    }




int main(){

//1.FIND QUOTINET USING BINARY SEARCH
    // int divisor= 7;
    // int dividend= 29;
    
    // int n=-5;
    // cout<< abs(n) << endl;  //abs mhnje negative value la positive value convert krta

    // int ans=getQuotient(abs(divisor), abs(dividend));
    // //sign konti lavavi 
    // //

    // if((divisor>0) && (dividend<0) || (divisor<0 && dividend>0)){
    //     ans = 0-ans;
    // }

    // cout<<"Final ans is: " << ans << endl;



//2.BINARY SEARCH ON NEARLY SORTED ARRAY
    // int arr[7]={20,10,30,50,40,70,70};
    // int size=7;
    // int target= 70;

    // int TargetIndex= searchNearlySorted(arr, size, target);

    // if(TargetIndex == -1){
    //     cout<<"Element not found" << endl;
    // }
    // else{
    //     cout<<"Element found at:" << TargetIndex << endl;
    // }



//3.
    int arr[]= { 10,10,2,2,3,3,2,-5,5,6,6,7,7};
    int n=13;
    

    int ansIndex = findOddOccuringElement(arr, n);
    cout<< "Final ans is: " << arr[ansIndex] << endl;


    return 0;
}