#include<iostream>
#include<string>
#include<vector>
using namespace std;


//1.
    void findSubString(char ch, int n){
        int index=0;
        
    }




int main(){

//creation
//     string name;

// //input
//     //cin >> name;
//     getline(cin, name);

// //print
//     cout<< "Name is:"<<name << endl;

// //cout<<"Printing first character:" << name[0] << endl;
//     int index=0;
//     while(name[index] != '\0'){
//         cout<< "Index:" << index << "Character :" << name[index] << endl;

//         index++;
//     }
//     cout<<"Printing index 9:" << name[9] << endl;

// //ASCII VALUE
//     int value = (int)name[9];
//     cout<<"Value:" << value<< endl;




//1.
    // string name;
    // getline(cin, name);

    // //empty string
    // string temp = "";

    // cout<<"Length of string:" << name.length() << endl;
    // cout<<"String is empty or not:"<< temp.empty() << endl; //true->1, false->0

    //cout<<"Char at position or index at 0: " << name.at(0) << endl;

    // cout<<"front charater of string is:" << name.front()<< endl;

    // cout<<"Back charater of string is:" << name.back()<< endl;

//append= add
    // string str1="Love";
    // string str2 = "Babbar";

    // cout<<"Before append:" << endl;
    // cout<< str1<< endl;
    // cout<<str2 << endl;

    // //append
    // str1.append(str2); //first string dusrayat add zali

    // cout<<"After append:" << endl;
    // cout<< str1<< endl;
    // cout<<str2 << endl;


//1. REMOVING INDEXES 
    // string desc = "This is a car";
    // desc.erase(4,3); //4th index pasun 3 char kadhun taka
    // cout<< desc << endl;


//2/
    // string name= "lOVE BABBAR ";
    // string middle= "Kumar ";
    // string str= "to be question";
    // string str2 = "or not to be";



    // name.insert(5, middle);
    // cout<< "Printing name:" << name << endl;

    // str.insert(str.size(),1,':');
    // cout<< str << endl;

    // str.insert(str.end(),3,'.');
    // cout<< str << endl;

    // str.insert(str.begin()+5, ',');
    // cout << str << endl;

    // str.insert(6, str2, 3 ,4); // at 6th index inser str2 from str2 extract  4 characters starting from 3rd index
    // cout<< str << endl;


//3.
    // string name = "Love";

    // cout << name << endl;

    // name.push_back('R');
    // cout << name << endl;

    // name.pop_back();
    // name.pop_back();
    // cout << name << endl;


//3.FINDING A STRING IN A STRING
    // string str1 = "yaar tera superstar desi kalakar";
    // string str2 = "star";
    // string str3= "Star";

    // if(str1.find(str2) == string:: npos){
    //     //not found
    //     cout <<"Not found"<< endl;
    // }
    // else{
    //     cout<< "Found" << endl;
    // }


    // if(str2.compare(str3) == 0 ){
    //     cout << str2 << " is " << str3 << endl;
    // }
    // else{
    //     cout << str2 << " is not " << str3 << endl;
    // }
    

    // string str1 = "This is a car, big daddy of all suvs";
    // cout << str1.substr(19,5) << endl;


//1.REMOVE ALL OCCURANCES OF A SUBSTRING
    string str="Babbar";
    for(auto ch:str){
        cout<< ch << " ";
    }
    cout<< endl;


// vector<int>v;
// v.push_back(2);
// v.push_back(8);
// v.push_back(10);


    return 0;
}