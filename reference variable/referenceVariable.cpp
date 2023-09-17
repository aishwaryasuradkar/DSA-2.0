#include<iostream>
using namespace std;

//2.PASS OR CALL BY VALUE
    // int incrementBy1(int& n){
    //     n++;// NWE MEMORY BLOCK
    //     return n;
    // }


//3. CALL BY REFERENCE
    void IncrementBy1(int &k){
        k++; //NO NEW MEMORY BLOCK
    }


int main(){
//1. int n=5; //normal integer variable

    // //k is a regerence variable refering to 'n'
    // int&k =n ;//nickname given to 'n'

    // //c is a regerence variable refering to 'n'
    // int &c = n;//nickname given to 'n'

    // cout<<"n:" <<n << endl;
    // cout<<"k:" <<k << endl;
    // cout<<"c:" <<c << endl;

    // k++;
    // cout<<"n:" <<n << endl;
    // cout<<"k:" <<k << endl;
    // cout<<"c:" <<c << endl;

    //int &t = 6; //reference vab madhe constant value nahi store karu shakat. mhnje constant value cha nick name nahi banu shakt


//2.
    // int n;
    // cin>>n;
    // n = incrementBy1(n);
    // //printing n
    // cout<< "n: " << n << endl; 
   

//3.
    int n;
    cin>>n;
    IncrementBy1(n);
    //printing
    cout<< "n: "<< n<<  endl;

}