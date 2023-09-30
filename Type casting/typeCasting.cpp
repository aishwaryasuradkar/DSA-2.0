#include <iostream>
using namespace std;

int main(){

//1.IMPLICIT TYPE CASTING
    //1.int to float
//     int num1 = 10;
//     float num2 = 7.82;

//     float result = num1 + num2;
//    // int result = num1 + num2;
//     cout<< result << endl;

    //2. char to int
    // char ch ='A';
    // char a = ch + 1;
    // //66 = 65+1 => B
    // cout <<a << endl;

    //3. int to char 
    // int a = 97;
    // char ch =  a;
    // cout << ch << endl;



//2. EXPLICIT TYPE CASTING

    //1.double to int+
    // double pi = 3.14159265;
    // double pi2 = (int)pi;
    // cout << pi2 << endl;

    //2.float to char
    // float Number = 65.35;
    // char Vlaue = (char)Number;
    // //float to char
    // cout<< Vlaue << endl;


    //3.int to float
    int a = 10;
    int b = 2.5; // yaha implicit i.e automatic type conversion ho gaya and int will only store=2 cause it cant store decimal no
    // //float c = (float)a/b; // ye nahi kr sakte a ya b kisko floartt declare karado
    // float c = a/b;
    // cout << c << endl;
   
   
   //agar ye karna allowd nahi ho. specifically bola ho apko ki data type change krna allowed nhi h
    // to explicitly chupchap boldo ki kon float hai
    float c =((float)a/b);
    cout << c << endl;


}