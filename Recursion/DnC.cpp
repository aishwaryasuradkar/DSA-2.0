#include<iostream>
using namespace std;

//1.MERGE SORT  
    //step-2: Merge-sort of sorted array
    void merge(int arr[], int s, int e){

        int mid = s-(e+s)/2;
        int lenOfleft = mid-s+1;
        int lenOfright = e-mid; //e-(mid+1)+1

        //create left and right array or ye dono array abhi empty hai
        int *left = new int [lenOfleft]; //heap memory = new int[n];
        int *right = new int [lenOfright];

        //to ab values copy karenge from original array to left array
        int k = s;
        //k = starting index of left array 
        for(int i = 0; i < lenOfleft; i++){
            left[i] = arr[k]; //original ki values left mein copy ho gayi
            k++;
        }

        //or ab copy values from original array to right array
        k = mid+1;
        //k = starting index of right array 
        for(int i = 0; i < lenOfright; i++){
            right[i] = arr[k];
            k++;
        }

        ///actual merge logic
        //left array is already sorted and right is also sorted
        //bas ab merge krna hai
        int i = 0; //start of left array
        int j = 0; //start of right array

        //yahi pr galti karoge
        int mainArrayKaIndex = s; ///main array pr traverse krne ke liye
        
        //ab 2 pointers i,j cha logic
        while(i < lenOfleft && j < lenOfright){

            //konsi value chhoti hai
            if(left[i] < right[j]){
                arr[mainArrayKaIndex] = left[i]; //chhota nikla to main array mein daal diya =.
                mainArrayKaIndex++;
                i++;
            }

            else{
                arr[mainArrayKaIndex] = right[i]; //chhota nikla to main array mein daal diya =.
                mainArrayKaIndex++;
                j++;
            }
        }

        //2 corner cases
        //case 1 - left array khatam ho gaya but right array madhe ajun
        //pn elements baki ahet
        while( j < lenOfright){
            //bacheve elementys copy krlo
            arr[mainArrayKaIndex] = right[j]; //chhota nikla to main array mein daal diya =.
                mainArrayKaIndex++;
                j++;
        }


        //case 2 - right array khatam ho gaya but left mein elements
        // baki hai
        while(i < lenOfleft){
            arr[mainArrayKaIndex] = left[i]; //chhota nikla to main array mein daal diya =.
                mainArrayKaIndex++;
                i++;

        }

        //heap memory ko delete krdo ab uyse kr li hai na
        delete[] left; //left array
        delete[] right; //right array

    }


    //step-2:. Sort the unsorted array
    void mergeSort(int arr[], int s, int e){
        //base case
        if(s >= e){
            //invalid arrray
            return;
        }

        //ab array break krdo bichmese or krte raho
        int mid = s-(e+s)/2;
        //kabtak? jabtak s=e nahi ata 
        //ye aagaya matlab base case aaya matlab ruko bhaiyya


        //rc
        //left and right array ko sort karwayo
        //1.rc for left array
        mergeSort(arr, s, mid);//start se e = mid tak

        //2.rc for right array
        mergeSort(arr, mid+1, e); // s = mid+1 to e tak

        //array for sorted elements
        merge(arr, s ,e);
    }



int main(){

//1. Merge sort
    int arr[] ={2,1,9,7,4,6}; 
    int size = 6;
    int s = 0;
    int e = size-1;

   cout << "Before Merge sort:" << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, s,e); 

    cout << "After Merge sort:" << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;




return 0;
}