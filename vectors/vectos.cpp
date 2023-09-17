#include<iostream>
#include<vector>
using namespace std;

//1.DYNAMIC ARRAY
    // void fun(int arr[] , int n){
    //     cout<<"Array elements are:" << endl;
    //     for(int i=0; i<n; i++){
    //         cout<< arr[i] << endl;
    //     }
    // }

//2.
     void print(vector<int>v){
        int size = v.size();// size batado litne kare elements insert
        for(int i=0; i<size; i++){
            cout<< v[i] << endl; 
            //cout<< v.at(i) << endl;
        }
     }

//3.
    // void print(vector <char> v){
    //     int size = v.size();// size batado litne kare elements insert
    //cout<< "Printing vector method 1: "<< endl;
    //     for(int i=0; i<size; i++){
    //         cout<< v[i] << endl; 
    //         //cout<< v.at(i) << endl;
    //     }
    //  }


//4. 
    void print2(vector<int>v){
        cout<< "Printing vector method 2: "<< endl;
        for(auto it:v){//THIS IS FOR EACH LOOP
            cout<< it <<" ";
        }
    }



int main(){

//1.  //STATIC MEMORY ALLOCATION
    // int arr[5]= {1,2,3,4,5};
    // fun(arr,5);


    // //DYNAMIC MEMORY ALLOCATION
    // int n;
    // cin>> n;
    // int*arr = new int [n]; //EACH ELEMENT WOULD BE 0 OR GARBAGE

    // //TAKING N ELEMENTS INPUT AND INSERTING ARRAY
    // for(int i=0; i<n; i++){
    //     int data;
    //     cin>> data;
    //     arr[i] = data;
    // }

    // //LETME TRY TO INSERT MORE ITEMS
    // for(int i=0; i<10; i++){
    //     arr[n+i]=80;
    // } // new items taku nahi shakate ani hya saglyacha solution ahe vectors!! 
    // fun(arr, n);


//In vector, don't mention size of vector.
//just keep inserting , i will manage allocations

    // vector<int>v;

    //1. //INSERTING IN VECTOR
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    //2. //printing
    // print(v);

    //3. //deleting
    // v.pop_back();
    // print(v);


    //4. vector<int>v;
    // while(1){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    //     cout<<"CApacity is: "<< v.capacity() << " Size is:" << v.size() << endl;
    // }
    

//5. TAKING INPUT IN VECTOR     
    //     vector<int> v;

    //     //insert
    //     int n;
    //     cin>>n;
    //     for(int i=0; i<n; i++){
    //         int d;
    //         cin>>d;
    //         v.push_back(d);
    //     }
    //     // cout<<"Printing vector:" << endl;
    //     // print(v);

    //     // for(int i =0; i<10; i++){
    //     //     v.push_back(80);
    //     // }
    //     // cout<<"Printing vector:" << endl;
    //     // print(v);

    // //vector pura clear krna h
    //     v.clear();
    //     v.push_back(50);// pura vector clear hone ke baad ye element dalega 
    //     print(v);

    //     //pop
    //     v.pop_back();
    //     print(v);


//6.INITIALIZATION METHODS
  //1st
        //vector <int> arr; //default initialization method with no data and 0 size

   //2nd
        //vector <int> arr2(5, -1); //size 5 with data -5
        //arr2.push_back(50);
        //print(arr2);

  //3rd
        // vector<int>arr3= {1,2,3,4,5};
        // arr3.pop_back();
        // print(arr3);
  //4th
        // vector <int> arr4{1,2,3,4,5};
        // print(arr4);


//7.HOW TO COPY VECTOR FROM ANOTHER VECTOR
        // vector <int> arr5{1,2,3,4,5};
        // vector <int> arr6(arr5);
        // print(arr6);


//8.
    // vector <char> v;
    // v.push_back('a');
    // v.push_back('b');
    // v.push_back('d');
    // v.push_back('c');
    // print(v);
 
    // cout<< "Front element: "<< v[0]<< endl;
    // cout<< "Front element: "<< v.front() << endl;
    // cout<< "End element: "<< v[v.size()-1]<< endl;
    // cout<< "End element: " << v.back() << endl;


//9.
     vector <int> v;
     v.push_back(10);
     v.push_back(20);
     v.push_back(30);
     v.push_back(40);

     print2(v);





    return 0;
}