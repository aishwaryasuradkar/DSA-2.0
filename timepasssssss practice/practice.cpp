#include<iostream>
#include<vector>
using namespace std;

//1. FAST EXPONENTIATION
    // int slowExponentiation(int a, int b){
    //     int ans = 1;

    //     for(int i=0; i<b; i++){
    //         ans*= a;
    //     }
    //     return ans;
    // }//t.c-> O(b)

    // int fastExponentiation(int a, int b){

    //     int ans =1;

    //     while(b > 0){
    //         if(b & 1){
    //             //odd jr ahe
    //             ans = ans*a;
    //         }
    //         a = a*a;
    //         b >>= 1; //right shift =  while (b > 0) {
    //                                     // if (b % 2 == 1) {
    //                                     //     // odd power
    //                                     //     ans = ans * a;
    //                                     // }
    //                                     // a = a * a;
    //                                     // b /= 2; // Divide b by 2
    //                                     //}
    //     }
    //     return ans;
    // }



//2.SIEVE OF ERASTOSTHENES
    vector<bool> sieve(int n){
        //create a sieve array of n size 
        vector<bool>sieve( n+1, true );    
        sieve[0] = sieve[1] = false;

        //for(int i=0; i<n; i++){
        //OPTIMIZATION-2
        for(int i=0; (i*i) <= n; i++){
            if(sieve[i] == true){
                //int j = i*2;
                //OPTIMIZATION-1 ->
                int j = i * i; 
                while(j <= n){
                    sieve[j] = false;
                    j += i;
                }
            }
        return sieve;
        }
            
}


int main(){

//1. FAST EXPONENTIATION
    // cout<< slowExponentiation(5,4) << endl;
    // cout<< fastExponentiation(5,5) << endl;


//2.SIEVE OF ERASTOSTHENES 
    vector<bool>Sieve = sieve(25);
    for(int i=0; i<=25; i++){
        if(Sieve[i]){
            cout<< i << " ";
        }
    }


return 0;
}