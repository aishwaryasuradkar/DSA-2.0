#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;


//1.
    // void printArray(int arr[][4], int row, int col){
    //     for(int i=0; i<row; i++){
    //         for(int j=0; j<col; j++){
    //             cout<< arr[i][j]<< " ";
    //         }cout<< endl;
            
    //     } 
    
    // }

    //1. void colwiseprint(int brr[][4], int row, int col){
    //     for(int i=0; i<col; i++){
    //         for(int j=0; j<row; j++){
    //             cout<< brr[j][i]<< " ";
    //         }cout<< endl;
            
    //     } 

    // }

 //4.
    // bool findtarget(int arr[][4],int row,int col){
    //     for(int i=0; i<row; i++){
    //         for(int j=0; j<col ;j++){
    //             if( arr[i][j]== target){
    //             //if found, return true
    //             return true;
    //          }          
    // }
    //     }
    //     return false;
    // }


//5.
    // int findMax(int arr[][4],int row,int col){
    //     int minAns= INT_MIN;
    //     for(int i=0; i<row; i++){
    //         for(int j=0; j<col ;j++){
    //             if(arr[i][j] > minAns){
    //                 minAns= arr[i][j];
    //             }
    //         }
    //     }
    // } do find min too


//7. ROW WISE SUM PRINT KARO
    // void rowWiseSum(int arr[][4], int row, int col){

    //     for(int i=0; i<row; i++){
    //         int sum=0;
    //         for(int j=0; j<col; j++){
    //             sum= sum + arr[i][j];

    //         }
    //         cout<< sum<< endl;
    //     }
    // }


//8. COL WISE SUM

    // void colWiseSum(int arr[][4], int row, int col){
    //     for(int i=0; i<col; i++){
    //         int sum=0;
    //         for(int j=0; j<row; j++){
    //             sum= sum+ arr[j][i];

    //         }
    //         cout<< sum << endl;
    //     }
    // }


//
void printArray( int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<< arr[i][j] <<" ";
        }
        cout<< endl;
    }
}

//9. TRAnsposing
    void afterTranpose(int arr[][3], int row, int col){
        for(int i=0; i<row; i++){
            for(int j=i; j<col; j++){
                swap(arr[i][j], arr[j][i]);
                cout<< arr[j][i]<< " ";
            }
        }cout<< endl;
    }



//10.
  


//11. BINARY SEARCH IN 2D
    // bool searMatrix( vector<vector<int>>& matrix, int target){

    //     int row= matrix.size();
    //     int col = matrix
    // }



int main(){

//1. CREATE 2D ARRAY
    // int arr[3][3];

//2. INITIALIZE
    // int row=3;
    // int col=4;
    //     int brr[3][4]={
    //         {1,2,3,4},
    //         {5,6,7,8},
    //         {9,10,11,12},
    //     };
    //     printArray(brr,row,col);
    //     colwiseprint(brr, row,col);


//3. TAKING INPUT
    // int arr[3][3];
    // int row=3;
    // int col=3;
    // for(int i=0; i<row; i++){
    //     for(int j;j<col; j++){
    //         cout<< "Enter input for row: "<< i << "Enter input for col: "<< j << endl;
    //         cin>> arr[i][j];
    //     }
    // }



//4. LINEAR SEARCH IN 2D ARRAY
    // int arr[3][4]={
    //         {1,2,3,4},
    //         {5,6,70,8},
    //         {9,11,11,12},
    //     };
    //     int row=3;
    //     int col=4;

    //     // int target= 110;

    //     // cout<<"Founf or not:" << findtarget(arr,row, col) ;
//5. find min and max
    //     cout<<"Printing max no" << findMax(arr, row,col) << endl;



//7.
    // int arr[3][4]={
    //         {1,2,3,4},
    //         {5,6,70,8},
    //         {9,11,11,12},
    //     };
    //     int row=3;
    //     int col=4;

    //     rowWiseSum(arr, row, col);

//8.
    // int arr[3][4]={
    //         {1,2,3,4},
    //         {5,6,70,8},
    //         {9,11,11,12},
    //     };
    //     int row=3;
    //     int col=4;

    //     colWiseSum(arr, row, col);



//9.
    // int arr[3][4]={
    //         {1,2,3,4},
    //         {5,6,70,8},
    //         {9,11,11,12},
    //     };
    //     int row=3;
    //     int col=4;

    //     cout<< endl << "Printing before transpose"<< endl;
    //     printArray(arr,row, col);
    //     transpose(arr, row, col);

    //     cout << endl << "Printing after transpose:" << endl;
    //     printArray(arr, row, col);



//9.
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    int row=3;
    int col=3;

    //printing before transpose
    cout<<"Printing before transpose:" << endl;
    printArray(arr, row, col);

    //TRANSPOSING
    afterTranpose(arr, row, col);
    
    //PRINTING AFTER TRANSPOSE
    cout<< "Printing after transpos: "<< endl;
    printArray(arr, row, col);

    

//10.VECTOR
    // int arr[5];
    // vector<int> v(5);
    // cout<< "Sizes of vector :"<< v.size();
    // cout<< endl <<"Printing vector"<< endl;
    // for(int i=0; i<v.size(); i++){
    //     cout<< v[i] << " ";

    // }cout<< endl;



//11. BINARY SEARCH IN 2D ARRAY



    return 0;
}
