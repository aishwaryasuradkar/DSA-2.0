#include <iostream>
using namespace std;

// FUNCTIONS
    // void printLine() {
    //   for (int i = 0; i < 10; i++) {
    //     cout << "LALALALA" << endl;
    //   }
    // }

//2.ADD 2 NUMBERS
    // int add(){
    //     int a=10, b=12;
    //     int c;
    //     cout<< "c:"<< a+b << endl; 
    //     //return add;
    // }
    
//3. 
    // void printA(){
    //     cout<<"Inside A";
    //     cout<<"Going back to main";
    // }

//4. PRINT SUM OF 3 NUMBERS
    // void sum(int a, int b, int c){
    //     int ans= a+b+c;
    //     cout<<"Sum is:"<< ans<< endl;
    // }

//4. diff way
// int sum(int a, int b, int c){
//     int ans= a+b+c;
//     return ans;
//}

//5. FIND MAX OF 3 NUMBERS
    // void printmax(int a, int b, int c){
    //     if(a>=b && a>=c){
    //         cout<<"a is the max no."<< endl;
    //     }
    //     else if(b>=a && b>=c){
    //         cout<<"b is the max no."<< endl;
    //     }
    //     else {
    //         cout<<"C is the max no."<< endl;
    //     }

//5. diff way
    // void printmax(int n1, int n2, int n3){
    //     int ans1= max(n1,n2);
    //     int finalans= max(ans1, n3);
    //     cout<<"Final ans is"<< final ans<< endl;
    // }
    // }

//6. COUNTING FROM 1 TO N
    // void printcounting(int n){
    //     for(int i=1; i<=n; i++){
    //         cout<< i << endl;
    //     }
    // }

//7.EVEN ODD
    // void checkevenodd(int num){
    //     if(num%2==0){
    //         cout<<"Even no."<< endl;
    //     }
    //     else{
    //         cout<<"Odd no."<< endl;
    //     }

//8. FIND SUM UPTO N
    // void findsumuptoN(int num){
    //     int sum=0;
    //     for(int i=1; i<=num; i++){
    //         sum= sum+i;
    //     }
    //     cout<<"Final sum:"<< sum<< endl;
    // }

//9.SUM OF EVEN  NO UOTO N
    //  void sum(int n){
    //     int sum =0;
    //     for(int i=2; i<=n ;i=i+2){
    //         sum= sum+i;
    //     }
    //     cout<<"Sum is:"<<sum<< endl;
    //  }
    

//9. PRINT PRIME OR NOT
    //will return -> is n is prime
    //will return -> false if n is not prime+
    // bool primeornot(int n){
    //     for(int i=2; i<n; i++){
    //         if(n%i==0){
    //             cout<<"Its a prime no";
    //         }
    //         else{
    //             cout<<"Its not a prime no.";
    //         }
    //     }

    // }


//11. FIND AREA OF CIRCLE
    float findAreaOfCircle( float r){
        float area;
        area = (3.14 * r *r);
        return area;
    }




//12.EVEN OR ODD
    bool EvenOrOdd(int n){
         if(/*n%2 == 0*/ (n & 1 == 0)){
           return true;
        }
        else{
            return false;
        }
    }


//13.FACTORIAL
    long long int findFactorial(long long int n){
        long long int fact = 1;
        for(int i=1; i<=n; i++){
            fact = (fact * i);
        }
        return fact;
    }


//14. PRIME OR NOT
    bool primeOrNot(int n){
        for(int i=2; i<n; i++){
            if(n%i == 0){
               return true;
            }
            else{
                return false;
            }
        }
    }


//15.
    bool checkPrime(int n){
        if(n<=1){
            return false;
        
        int i=2;
        for(int i=2; i<n; i++){
            if(n%i == 0){
               return false;
            }
        }
        return true;
    }
    }

   int main(){

// FUNCTION CALL
    //1.   printLine();

  //2. return add();
   
    //3.
    // cout<<"inside main";
    // printA();
    // cout<<"Back in main";

  //4.
     // sum(1,2,3)

//    int ab= sum(4,1,4);
//    cout<< "Sum is:" << ab <<endl;

//5.
    // printmax(400,20,3);
    //

//6.
   // printcounting(10);

//7.
    //checkevenodd(110);


//8.
    //findsumuptoN(10);


//9.
    //sum(10);


//10.
     //primeornot(3);
    // bool prime= checkprime(2);
    // if(prime){
    //     cout<<"Its a prime no";
    // }
    // else{
    //     cout<<"Its not a prime no.";
    // }


//11. CALCULATE AREA OF CIRCLE
    // int radius;
    // cout<< "Enter the radius: ";
    // cin>> radius;

    // float areaOfCircle = findAreaOfCircle( radius);
    // cout << "Area of circle is:" << areaOfCircle << endl;



//12.EVEN OR ODD
    // int n;
    // cout<<"Enter a number:" ;
    // cin>>n;

    // bool  IsEven = EvenOrOdd(n);

    // if(IsEven){
    //     cout<<"An even number"<< endl;
    // }
    // else{
    //     cout<< "An odd number"<< endl;
    // }


//13.FACTORIAL
    // int n;
    // cout<<"Enter a number: ";
    // cin>> n;

    // int fact = findFactorial(n);
    // cout << "The factorial of " << n << " is: " << fact << endl;



//14. PRIME OR NOT
    // int n;
    // cout<< "Enter a number:";
    // cin>> n;

    // int IsPrime = primeOrNot(n);
    // if(IsPrime){
    //     cout<< "Not a prime number" << endl;
    //  }
    // else{
    //     cout<<"A prime number" << endl;
    // }
    


//15. PRINT ALL PRIME FROM 1 TO N
    int n;
    cout<< "Enter a number:";
    cin>> n;

    for( int i=2; i<=n; i++){
        bool IsPrime = checkPrime(i);
        if(IsPrime){
            cout<< i << " ";
        }

    }
   



   }