
#include<iostream>
#include<string.h>

using namespace std;


//1. FIND LENGTH OF THE STRING
    int findLength(char ch[], int size){
    //     // int length = 0;
    //     // for(int i=0; i<size; i++){
    //     //     if(ch[i] == '\0'){
    //     //         //thambun ja
    //     //         break;
    //     //     }
    //     //     else{
    //     //         length++;
    //     //     }
    //     // }


        //int len=0;
        int index=0;
        while(ch[index] != '\0'){
            //len++;
            index++;
        }

        return index;
    }



//3.
    void reverseString( char arr[], int size){
        int i= 0;
        int j= size-1;
        char ans= '1';

        while(i <= j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }



//4.CONVEERT TO UPPERCASE
    void convertToUppercase(char ch[], int n){
        int index=0;
        while(ch[index] != '\0' ){
            char currcharacter = ch[index];
            //check if lowercase then convert to uppercase
            if( currcharacter >= 'a' && currcharacter <= 'z'){
                ch[index] = currcharacter - 'a' + 'A';
            }
            index++;
        }
    }



//5.
    void replaceWithSpace(char ch[], int n){
        //n-> length of string
        int index=0;
        while(ch[index] != '\0'){
            char curr = ch[index];
            if( curr== '@' ){
                //replace with space
                ch[index]= ' ';
            }
            index++;
        }
    }



//6.
    bool checkPalindrome(char ch[], int n){
        int index=0;
        int i=0;
        int j=n-1;
        while(i <= j){
            if( ch[i]== ch[j]){
                i++;
                j--;
            }
            else{
                //characters are not matching
                return false;
            }

        }
        //agar yaha pohoch gaye ho to sare char match kr gaye hai
        //matlab string palindrome hai
        //matlab true return karado

        return true;
    }



int main(){
// //creation
//     char ch[100];


// //input
//     //cin>> ch;


// //cin>>ch getline
//     cin.getline(ch, 100);


// //print
//     cout<< "Printing the value of ch: "<< ch << endl;


//1.printing using loop
//     for(int i=0;i<10;i++){
//         cout<<"At Index:" << i << " " << ch[i] << endl;
//     }


// // finding out null_character's ascii value
//     char temp=  ch[6];
//     int value = (int)temp;
//     cout<< "Printing integer value :" << value << endl;



//2.LENGTH OF STRING
    // char ch[100];

    // //cin>> ch;
//     cin.getline(ch, 100); //Spaces pn count honar


//     int len =  findLength(ch,100);

//     cout<< "Length of the string: " << len << endl;
//     // cout<< "Printing  length:" << strlen(ch)<< endl;
    


// //3.REVERSING AN ARRAY
//     char ch[100];
//     cin.getline(ch,100);

//     //string reverse =  reversingArray( ch, 100);
//     cout<<"Before:" << ch << endl;

//     // int len =  findLength(ch,100);
//     // reverseString(ch, len);

//     // cout<< endl<< "Reversed string is:"  << ch << endl;


// //4. CONVERT TO UPPERCASE
//     // cout<< "Before:" << ch << endl;
//     // convertToUppercase(ch, 100);
//     // cout << "After:" << ch << endl;



// //5.REPLACE @ WITH SPACE
//     cout<< "Before:" << ch << endl;
//     replaceWithSpace(ch, 100);
//     cout << "After:" << ch << endl;



//6.CHECK PALINDROME
    char ch[100];
    cin.getline(ch, 100);

    int len = findLength(ch, 100);

    bool isPalindrome= checkPalindrome( ch, len);

    if(isPalindrome){
        cout<<"Valid palindrome" << endl;
    }
    else{
        cout<<"Not a palindrome" << endl;
    }


}