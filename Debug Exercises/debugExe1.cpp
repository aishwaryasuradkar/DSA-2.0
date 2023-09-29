#include<iostream>
using namespace std;

int main() {
	char c;
    cout<<"Enter a character:" << endl;
    cin>>c;
    if('a'==c || c== 'z'){
        cout<<0;
    }
	else if('A'== c || c == 'Z'){
        cout<<1;
    }
    else{
        cout<<-1;
    }
}