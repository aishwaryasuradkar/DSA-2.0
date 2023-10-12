#include<iostream>
using namespace std;

int main(){
    // int a = 5;
    //cout << a << endl;
    //cout << "Address of a: " << &a << endl;


//1.CREATION
    // int* ptr = &a;


//2.Accessing value stored at 'ptr' which is the address of 'a' (this will print 'a')
    // cout << "Accessing: " << *ptr << endl; // address vab ka vab

    // cout << "a ka address: " << ptr << endl; //a ka address 

    // cout<< "ptr dabbe ka address: "<< &ptr << endl; //ptr wale dabbe ka address


//3.
    // int a = 5;
    // int* ptr = &a;
    // cout<<sizeof(ptr) << endl;

    // char ch = 'k';
    // char* cptr = &ch;
    // cout<< sizeof(cptr) << endl;


    // long lachi =  10;
    // long* lptr = &lachi;
    // cout << sizeof(lptr) << endl;



//4. ACCESSING ptr which is A BAD PRACTICE
    // int* ptr;
    // cout<< *ptr << endl;// runtime error dega //random memory ko access karega

    //how to solve
    // i will create a null pointer
    // int* ptr = 0;
    // cout << *ptr << endl; //helps while debugging



//5.
    






    return 0;
}