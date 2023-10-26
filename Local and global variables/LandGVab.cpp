#include<iostream>
using namespace std;

int x = 2; //GLOBAL VAB

void fun(){
    int x = 60;
    cout << x << endl;
    //global x ko change bhi kr sakte hai
    ::x = 40;
    cout << ::x << endl;
}



int main(){
    x = 4; //global x
    int x = 20; //local to main fn
    //funvtion mein local vab ko preference milti hai
    // cout << x << endl;

    //2. //then how to access global?
    // cout << ::x << endl; // o/p = 4

    //3.scoped
    {
        int x = 50;
        {
            int x = 44;
            cout << x << endl;
        }
        cout << x << endl; //most localled will be accessed
        //wo 20 ko nahi kr sakte access pr global ko kahi nbhi kr sakte hai access
        cout << :: x << endl;
    }

    //fun();
    return 0;
}