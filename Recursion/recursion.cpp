#include<iostream>
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
    cout << sum(5)  << endl;


    return 0;
}