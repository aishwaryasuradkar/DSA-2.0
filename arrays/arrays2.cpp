#include<iostream>
#include<limits.h>
using namespace std;

//1. void solve(int& a){
    //  a++;
    //  cout<<"Printing inside function:"<<a << endl;

//}

//2.PRINT PAIRS
    //     void solve(int arr[], int n){
    //     arr[0]=100;
    //  }


//2a.
    // int addPairs(int arr[], int n){
    //     int sum=0;
    //     for(int i=0; i<n; i++){
    //         for(int j=0; j<n; j++){
    //         sum=  arr[j]+ arr[i]; //calculate sum
    //         }
            
    //     }
    //     return sum ;
    // }


//3.FIND UNIQUE ELEMENT
    // EACH ELEMENT-> OCCURS TWICE
    // EXCEPT ONE. FIND THAT ONE.
    // WE USE XOR= SAME VAL->0
    //             DIFF VAL-> 1

    // int getUnique(int arr[],int n){
    // int ans=0;
    // for(int i=0; i<n;i++){
    //     ans= ans^arr[i];
    //     }
    //     return ans;
    // }

//6.COUNT 0'S AND 1'S
    // void countZeroOne(int arr[], int size){
    //     int zerocount=0;
    //     int onecount=0;

    //     for(int i=0; i<size; i++){
    //         if(arr[i]== 0){
    //             zerocount++;
    //         }
    //         if( arr[i] == 1){
    //             onecount++;
    //         }

    //     }
    //     cout<<"Zerocount:"<< zerocount<< endl;
    //     cout<<"onecount:"<< onecount<< endl;
    // } 



//7. RIGHT SHIFT
    // void shiftArray(int arr[], int n){
    //     //step 1
    //     int temp= arr[n-1];

    //     //step 2
    //     //shift -> arr[i] =arr[i-1]
    //     for(int i= n-1; i>=1; i--){
    //         arr[i]= arr[i-1];
    //     }

    //     //step-3
    //     arr[0]= temp;
    // }



//8.FIND MINIMUM NUMBER
    // int findMin(int arr[], int size){
    //     //store ans
    //     int minAns= INT_MAX;
    //     for(int i=0; i<size; i ++){
    //         if(arr[i]< minAns){
    //             minAns= arr[i];
    //         }
            
    //     }
    //     return minAns;
    // }



//9. REVERSING AN ARRAY
    // void reverseArray(int arr[], int size){
    //     int left=0;
    //     int right= size-1;

    //     while(left<= right){

    //         swap(arr[left], arr[right]);
    //         left++;
    //         right--;

    //     }

    //     // for(int left=0; right= size-1;left<= right,left++, right-- ){
    //     //     swap(arr[left], arr[right]);
    //     // } 

    //     //printing array
    //     for(int i=0; i<size; i++){
    //         cout<< arr[i]<< " ";
    //     }

    // }
    


//10. SORTING +VE ND -VE NUMBERS
    // void shiftNegativeANDPositive(int arr[], int n){
    //     int j=0;
    //     //memory block ahe. negative value store karayala

    //     for(int index=0; index<n; index++){
    //         if(arr[index] < 0){
    //             swap(arr[index], arr[j]);
    //             j++;
    //         }
    //     }
    // }



//11.
    // void printExtreme(int arr[], int size){
    //     int left=0;
    //     int right= size-1;

    //     while(left <= right){

    //         if(left == right){
    //             cout<< arr[left]<< endl;
    //         }
    //         else{
    //             cout<< arr[left]<< endl;
    //             cout<< arr[right] << endl;
    //         }

    //         //UPDATE LEFT AND RIGHT
    //         left++;
    //         right--;
    //     } 
    // }



//12.
//     int findPivotIndex(int arr[], int size) {
//     int s = 0;
//     int e = size - 1;

//     while (s <= e) {
//         // If the current segment has only one element, it is the pivot
//         if (s == e) {
//             return s;
//         }

//         int mid = s + (e - s) / 2;

//         // Check if mid is the pivot
//         if (arr[mid] > arr[mid + 1]) {
//             return mid;
//         }
//         if (arr[mid] < arr[mid - 1]) {
//             return mid - 1;
//         }
//         if (arr[s] > arr[mid]) {
//             //left la ja
//             e = mid - 1;
//         }
//         else {
//             // right la ja
//             s = mid + 1;
//         }
//     }

//     return -1; // No pivot element found
// }

//13.


//14.
    // int search(vector<int> &nums, int target){
    //     int pivotIndex = findPivotIndex(nums);


    //     //search in A
    //     if( target >= arr[0] && target <= arr[pivot])
    // }


//15.FIND SQUARE ROOT

    int mySquareRoot( int x){
        int s=0;
        int e=x;
        long long int mid = s+(e-s)/2;

        while(s <= e){
            //kya mid hi to ans nahi
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid < x){
                //right la ja
                int ans= mid;
                s=mid+1;
            }
            else{
                //left la ja
                e= mid+1;
            }
            mid= s+(e-s)/2;
}    
}




int main(){

//1. 
    // int a=5;
    // solve(a);
    // cout<<"Printing inside main function:"<< a<< endl;


//2.
    // int n=3;
    // int arr[]={10,20,30};

    // //solve(arr,n);
    // //print array
    // for(int i=0; i<n/2;i++){
    //     for(int j=0 ; j<n; j++){
    //          cout<< arr[i]<< " , "<< arr[j] << endl;
    //     }
       
    // }


//2.a TWO PAIR SUM
    // int n=3;
    // int arr[]={10,20,30};

    // int add = addPairs(arr, n);
    // //printing sum 
    // cout<< "The sum is:" << add << endl; 
        
    

//2b. PRINT TRIPLETS
    // int n=4;
    // int arr[]= {1,2,3,4};
    // for(int i=0; i<n;i++){
    //     for(int j=0; j<n; j++){
    //         for(int k=0; k<n; k++){
    //             cout<< arr[i] <<", " <<arr[j] <<", "<< arr[k] << endl;
    //         }
    //     }
    // }
    


//3.
    // int arr[]={2,10,11,10,2,13,15,13,15};
    // int n=9;

    // int finalAns = getUnique(arr,n);
    // cout<<" Final ans is:"<< finalAns << endl;


//4. PRINT ALL POSSIBLE PAIRS
    // int arr[]={10,20,30};
    // int n=3;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n/2;j++){
    //         cout<< arr[i]<< " "<< arr[j]<< endl;
    //     }
    // }

//5.PRINT TRIPLETS
    // int arr[]={1,2,3,4,5};
    // int n=5;

    // for(int i=0;i<n ;i++){
    //     for(int j=0;i<n;j++){
    //         for(int k=0; k<n; k++){
    //             cout<< arr[i] << " "<< arr[j]<< " "<< arr[k]<< endl;
    //         }
    //     }
    // }


//6. SORT 0'S AND 1'S
    // int arr[]= {0,1,0,1,1,1,1,0,0,0,1,0,1,0};
    // //0-> 7
    // //1-> 7
    // int size=14;

    // countZeroOne(arr,size);

    // //printing array
    // for(int i=0; i<size; i++){
    // }


//7.SHIFT ARRAY ELEMENT BY 1
    // int arr[]={10,20,30,40,50,60};
    // int n=6;

    // shiftArray(arr, n);

    // //print
    // for(int i=0; i<n; i++) {
    //     cout<< arr[i]<< "  "<< endl;
    // }


//8.
    //value of -2 to the power 31
    // cout<< INT_MIN << endl;

    // //value of 2 to the power 31 - 1
    // cout<< INT_MAX<< endl;

    // int arr[]={10,8,31,4,3,1,51};
    // int size=7;

    // int min = findMin(arr, size);
    // cout<< "Minimum number is:" << min<< endl;



//9.
// int arr[7]={10,20,30,40,50,60,70};
//     int n=7;

//     reverseArray(arr, n);



//10.
    // int arr[]={23,-7,12,-10,-11,40,60};
    // int n=7;

    // shiftNegativeANDPositive(arr,n);
    // cout<< "Printing the array:"<< endl;
    // for(int i=0; i<n; i++){
    //     cout<< arr[i] << " ";
    // }



//11. PRINT EXTREMES
    // int arr[6]={10,20,30,40,50,60};
    // int size= 6;

    // printExtreme(arr, size);



//12.PIVOT ELEMENT
    // int arr[8]= {12,14,16,2,4,6,8,10};
    // int size=8;

    // int pivotIndex= findPivotIndex(arr, size);
    // cout<< "Pivot Element is: " << pivotIndex << endl;


//13.




//15.FIND SQUARE ROOT



return 0;
}