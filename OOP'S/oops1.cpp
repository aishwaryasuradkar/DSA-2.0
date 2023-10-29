#include<iostream>
#include<string>
using namespace std;



class Student{
    //double a; //size is 8
    // double b; //size is 8 
    //char c; //size is 1 but if combined all these above 3 will gove ans 24

    private:
        string gfname;


    public:
        int id; // has size 4
        int age; // has size 
        string name; // has size 24 -> don't know how. 
        //String class ki implemntation hai danger wali to don't know bro!!
        //its called ABSTRACTION
        int nos; // has size 4
        bool present; //size is 1 but if combined all these above 3 will gove ans 12


    //1.CTOR : Default ctor :Assigns garbage value
    Student(){
        cout << "Student constructor is called" << endl;
    }


    //2. Parameterized ctor
    Student(int _id, int _age, bool _present, string _name,int _nos,  string _gfname ){
        id = _id;
        age = _age;
        present = _present;
        name = _name;
        nos = _nos;
        gfname = _gfname;

        cout << "Student parameterized ctor is called" << endl;
    }

    //3. ctor
    Student(int _id, int _age, bool _present, string _name,int _nos ){
        id = _id;
        age = _age;
        present = _present;
        name = _name;
        nos = _nos;
        

        cout << "Student parameterized ctor w/o gf is called" << endl;
    }


        void study(){
            int a;
            cout << "Studying" << endl;
        }
        void sleep(){
            cout << "Sleeping" << endl;
        }
        void bunk(){
            cout << "bunking" << endl;
        }

    private:
    void gfchatting(){
        cout << "Chatting" << endl;
    }
 };


int main(){

   Student s1; //Khokla student default ctor // student naam ka insaam ban gaya hai
   //cout << s1.age << endl; 
        // s1.name = "Aishwarya";
        // s1.age =12;
        // s1.nos = 5;
        // s1.present = true;

    // Student s2; //kya int a or int b same hai? to s1 or s2 bhi same nahi hai 
        // s2.name = "Chhota bheem";
        // s2.age =12;
        // s2.nos = 5;
        // s2.present = true;


    Student s3(1, 12, 1, "Chhota bheem", 5 ,"Chutki" );
    cout << s3.name << endl;
    cout << s3.id << endl;
    //cout << s3.gfname << endl; //private hai to nahi access kr sakte

    Student s4(2, 12, 0, "Motu", 5 );
    cout << s4.name << endl;
    cout << s4.id << endl;

    //Dynamic memory allocation/ or on Heap
    // int *a = new s (5);
    Student *s5 = new Student(5, 13, 1, "Chintu", 6);
    cout << s5->name << endl; 
    cout << (*s5). name << endl;

    delete s5; //heap memory kri hai create to dlt bhi krni hai complsry




    //cout << sizeof(Student) << endl;


    return 0;
}