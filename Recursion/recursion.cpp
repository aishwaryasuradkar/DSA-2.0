#include<iostream>
#include<limits.h>
#include<vector>
#include<climits>
using namespace std;

//1.factorial
    int factorial(int n){
        // //base case
        if(n == 1){
            return 1;
        }
        if(n == 0){
            return 1;
        }

        //recursive relation
        //1. int ans = n * factorial (n-1);
        //2.
        int recursionKaAns = factorial(n-1);

        //processing
        int finalAns = n * recursionKaAns;
        return finalAns;
    }




//2.Counting
    void print(int n){
        //basr case
        if(n==1){
            cout << 1;
            return;
        }
        //processing
        cout<< n <<" ";

        //recursion
        print(n-1);

         //processing
        //cout<< n <<" "; //print from 1 to n
    }



//3. Power of x
    int Pow1(int n){
        //base case
        if(Pow1 == 0){
            return 1;
        }
        //Recursive Relation
        int ans = 2 * Pow1(n-1);
        return ans;
        
    }



//4.FIBOACCI SERIES
    int fib(int n){

        //base case
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }

        //
        int ans = fib(n-1) + fib(n-2);
        return ans;
    }


//5. print sum from n to 1
    int sum(int n){
        //base case
        if(n ==1 )
            return 1;
        //RR
        int ans = n + sum(n-1);
        return ans;
    }



//6.Recursion and Array
    void printArray(int arr[], int size, int index){

        //base case
        if( index >= size){
            return;
        }

        //1.will print 10,20,30,40,50
        //processing
        cout << arr[index] <<" " ; 
       

        //Recursive call
        printArray(arr, size, index+1);

        //2.will print 50,40,30,20,10
        //processing
        cout << arr[index] <<" " ; 
    }


//7. Search in array
    bool searchInArray(int arr[], int size,int i, int target){

        //base case
        if(i >= size){
            return false;
        }

        //processing
        if(arr[i] == target){
            return true;
        }

        //RC
        bool AgeKaAns = searchInArray(arr, size, i+1, target);

        return AgeKaAns;
    }


//8. find min no
    void findMin(int arr[], int size, int i, int &min_no ){
        //base case
        if(i >= size){
            return;
        }

        //processing
        min_no = min(min_no, arr[i]);

        //recursive call
    findMin(arr, size, i+1, min_no);
    }


//9. Print even numbers in vector
    void solve(int arr[], int size, int i, vector<int> &v){

        // base case
        if(i >= size){
            return;
        }

        //processing
        if(arr[i] % 2 == 0){
            v.push_back(arr[i]);
        }

        //RC
        solve(arr, size, i+1, v);

    }


//10. find max no
    void maxNo(int arr[], int size, int i, int &max_no){

        //base case
        if(i >= size){
            return;
        }

        //processing
        max_no = max(max_no, arr[i]);

        //RC
        maxNo(arr, size, i+1, max_no);
    }



//11.Doube
    void doubleIP(int arr[], int size, int i){
        //base case
        if(i >= size){
            return ;
        }

        //processing
        arr[i] = 2*arr[i];

        //recursive call
        doubleIP(arr, size, i+1);

    }


//12.
    int findInArray(int arr[], int size, int i, int target){
        //base case
        if(i >= size){
            return -101; // element not found
        }
        //processing
        if(arr[i] == target){
            return i;
        }
        //recursive call
        findInArray(arr, size,i+1, target);
    }



//13. find index of all occurances of target in an array
    void occurances(int arr[], int size, int i, int target){
        //base case
        if(i >= size){
            return ;
        }

        //processing
        if (arr[i] == target){
            cout << i << " ";
        }

        //rc
        occurances(arr, size, i+1, target);
    }


//14. above ques but return a vector
    // vector<int> find(int arr, int size, int i, int target){
    //     vector<int> ans;
    //     //base case
    //     if(i >= size){
    //         return ans;
    //     }        
    //     //processing
    //     if(arr[i] == target){
    //         ans.push_back(i);

        //rc
        //this wil also returna vector hence create a new vector 
        //combine above and new vector and create tht too and return that combo vector

//     }//very hard hence do follow
// }

//15. very simple if we send vector in a function 
    void find(int arr[],int size, int i, int target, vector<int>v){
        //base case
        if(i >= size){
            return ;
        } 
        //processing
        if(arr[i] == target){
            v.push_back(i);
        }
        //rc
        find(arr, size, i+1, target, v);
    }


//16. ip= integer
    void digits(int num, vector<int>&v ){
        //base case
        if(num == 0){
            return;
        }
    
        //processing 1
        int digit = (num % 10);

        //update num
        num = (num / 10);         
        
        //rc
        digits(num,v);
        // OR rather than update num => digits(num/10, v);

        //processing 2
        //cout << digit << endl;
        v.push_back(digit);

    }
       



int main(){

//1. factorial
    //cout << factorial(5) << endl;


//2.
    //print(5);


//3.
    //cout << Pow1(10) << endl;


//4.
    //cout << fib(7) << endl;


//5.
    //cout << sum(5)  << endl;


//6.
    // int arr[] = {10,20,30,40,50};
    // int size = 5;
    // int index = 0;
    // printArray(arr, size, index);


//7.
    // int arr[] = {10,20,30,50,50};
    // int size = 5;
    // int i = 0;
    // int target = 60;

    // cout <<"Target found or not (1 = found, 0 = not found): "<< searchInArray(arr,size,i, target) << endl;
  
    
//8.
    // int arr[] = {10,20,30,40,50};
    // int size = 5;
    // int i = 0;
    
    // int min_no = INT_MAX;
    // findMin(arr, size, i, min_no);
    // cout <<"Minimum no is: " << min_no<< endl;


//9.
    // int arr[] = {11,12,13,14,15};
    // int size = 5;
    // int i = 0;
    // vector<int>v;
    // solve(arr, size, i, v);

    // //printing vector
    // //for each loop
    // for(int num:v){
    //     cout << num << " ";
    // }

    //for loop
    // for(int i = 0; i < v.size(); i++){
    //     cout <<v[i] ;
    // }



//10.find max no
    // int arr[] = {20,8,4,2,5};
    // int size = 5;
    // int i = 0;

    // int max_no = INT_MIN;
    // maxNo(arr, size, i, max_no);
    // cout << "Maximum no is:" << max_no << endl;


//11.
    // int arr[] = {10,20,30,40,50};
    // int size = 5;
    // int i = 0;

    // doubleIP(arr, size,i);
   
    // //printing
    // for(int num: arr){
    //     cout << num << " ";
    // }
    // cout << endl;


//12.
    // int arr[] = {10,20,30,40,50};
    // int size = 5;
    // int i = 0;
    // int target = 80;

    // int ans = findInArray(arr, size, i, target);
    // cout << "Element found at index: " << ans << endl;



//13.
    // int arr[] = {10,20,10,10,50};
    // int size = 5;
    // int i = 0;
    // int target = 10;

    // occurances(arr, size, i , target);
    


//16.
    int num = 4215;
    vector<int>v;
    digits(num, v);

    //printing vector
    for(int num:v){
        cout << num << endl;
    }
    

    return 0;
}