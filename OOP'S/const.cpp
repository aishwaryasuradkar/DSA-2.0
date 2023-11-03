#include<iostream>
using namespace std;


class abc{
    int x;
    int *y;
    int z;

    public:
        abc(){
            x = 0;
            y = new int(0);
        }
        abc(int _x, int _y, int _z=0){ //z= default argument
            x = _x;
            y = new int(_y);
            z = _z;
        }
    //1.
        int getX() const {
            //ata x chi value nahi badlu shkt apan 0 ch rahil
            return x;
        }
        void setX(int _val){ // set ko const nahi thevnr ka? well kashala karaychay
            x = _val;
        }
    //2.
        int getY() const {
            // int f  = 20;
            // y = &f;
            return *y;
        }
        void setY(int _val){
            *y = _val;
        }
};

void printABC(const abc &a){
    cout << a.getX() << " " << a.getY() << endl;
}


int main(){

    abc a(1,2);
    printABC(a);
    // cout << a.getX() << endl;
    // cout << a.getY()<< endl;





return 0;
}




int main2(){

//1. const
    // const int x = 5; // x is constant
    // //initialization can be domne but we can't reassign it to anything
    // x ==10; not at all possible
    // cout << x << endl;

//2. const with pointer
    // const int *a = new int(2) ;// const data, non-const pointer
    // int const *a = new int (2); // same as above
    // //*a = 2;
    // cout << *a << endl;
    // delete a;

    //2.1 classic example of non-const pointer
        // int b = 5;
        // a = &b;
        // cout << *a << endl;


    //2.2 CONST pointer, but NON-CONST data
        // int *const a = new int(2);
        // cout << *a << endl;
        // *a = 20;
        // cout << *a << endl;

        // int b = 50;
        // a = &b; //nahi chalega kyuki pointer const hai mera



//3. Const data, const pt
    const int *const a =  new int (10);
    cout << *a << endl;
    // *a = 50; // nahi chalega
    // int b = 50;
    // a = &b; // ye bhi nahi chalega














    return 0;
}