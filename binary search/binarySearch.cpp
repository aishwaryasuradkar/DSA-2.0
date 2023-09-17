#include<iostream>
#include<vector>
using namespace std;


//1.BINARY SEARCH
    // int binarySearch(int arr[], int n, int target){

    //     int start=0;
    //     int end=n-1;

    //     int mid= (start+end)/2;

    //     while(start<= end){
    //         //founf
    //         if(arr[mid] == target){
    //             //return index of found element
    //             return mid;
    //         }
    //         else if(target > arr[mid]){
    //             //right me jao
    //             start = mid+1;
    //         }
    //         else if(target < arr[mid]){
    //             //left me jao
    //             end= mid-1;
    //         }
    //         //mid update
    //         mid = (start+end)/2;
    //     }
    //     return -1;
    // }


//2.FIND FIRST OCCURANCE OF A NUMBER (ON WHICH INDEX) IN A SORTED ARRAY
    int findfirstOccurance(int arr[], int n, int target){
        int s=0;
        int e=n-1;
        int mid= (s+e)/2;
        int ans=-1;

        while( s<=e){
            if(arr[mid] == target){
                //ans store karlo
                ans = mid;
                //left me jao
                e=mid-1;
            }
            else if(target > arr[mid]){
                //right me jao
                s = mid+1;
            }
            else if(target < arr[mid]){
                //left me jao
                e= mid-1;
            }
            //mid update
            mid = (s+e)/2;
        }
        return ans;
    }




//3. LAST OCCURANCE IN A SORTED ARRAY
    int findLastOccurance(int arr[], int n, int target){
        int s=0;
        int e=n-1;
        int mid= s+(e-s)/2;
        int ans=-1;

        while( s<=e){
            if(arr[mid] == target){
                //ans store karlo
                ans = mid;
                //right me jao
                s = mid+1;
            }
            else if(target > arr[mid]){
                //right me jao
                s = mid+1;
            }
            else if(target < arr[mid]){
                //left me jao
                e= mid-1;
            }
            //mid update
            mid = (s+e)/2;
        }
        return ans;
    }


//4. FIND TOTAL OCCURANCE
    int findTotalOccurance( int arr[], int n, int target){
        int firstocc= findfirstOccurance(arr, n, target);
        int lastocc =  findLastOccurance(arr, n, target);

        if( firstocc == -1 || lastocc == -1){
            return -1;
        }

        int totalocc = lastocc - firstocc +1;

        return totalocc;
    }

    

//5.FIND MISSING ELEMENT IN A SORTED ARRAY
    //  int findMissingElement( int arr[], int n){
    //     int s = 0;
    //     int e = n-1;
    //     int mid = s+(e-s)/2;
    //     int ans = -1;

    //     while( s<=e){
    //         int diff = arr[mid]- mid;

    //         if(diff== 1){
    //             //right m jao
    //             s= mid+1;

    //         }
    //         else{
    //             // ans store krlo
    //             ans = mid;
    //             //left mein jao
    //             e= mid-1;
    //         }
    //         mid= s+(e-s)/2;
    //     }
    //         if( ans+1 == 0)
    //         return n+1;


    // return ans+1;
    // }
    


//6. PEAK ELEMENT IN A MOUNTAIN ARRAY
    // int peakIndexInAMountain(vector <int>& arr){
    //     int n= arr.size();
    //     int s=0;
    //     int e= n-1;
    //     int mid = s+(e-s)/2;

    //     while(s < e){
    //         if(arr[mid] < arr[mid+1]){
    //              //A walya line madhey
    //              //peak right la he mhnje
    //              //left jao
    //              s =  mid+1;
    //         }
    //         else{
    //             //ektr me B line vr ahe kiva peak vr

    //             //left jao
    //             e= mid- 1;
    //         }
    //         mid= s+(e-s)/2;
    //     }
    //     return s;

    // }



int main(){
//1.
    // int arr[]= {10,20,30,30,30,30,40,50,60};
    // int target= 30;
    // int n=9;

    // int ansIndex = findLastOccurance(arr,n , target);

    // if(ansIndex == -1){
    //     cout<< "Element not found" << endl;
    // }
    // else{
    // cout<< "Element found at index: "<< ansIndex << endl;
    // }



// 4.
    int arr[]= {10,20,30,30,30,30,40,50,60};
    int target= 70;
    int n=9;

    int ansTotal = findTotalOccurance(arr, n , target);
    cout<< "Total occurances are: "<< ansTotal << endl;

    
    return 0;


//5.
    // int arr[]={1,2,3,4,5,6,7,8};
    // int n=8;

    // cout<<"Missing element is:" << findMissingElement(arr,n) << endl;


//6.
    // vector<int> vec={10,20,50,40,30};
    // int n=5;

    // int peakIndex = peakIndexInAMountain(vec);

    // //int peakIndex = peakIndexInAMountain(arr, n);
    // cout<<"Peak element is:" << peakIndex << endl;



return 0; 
}