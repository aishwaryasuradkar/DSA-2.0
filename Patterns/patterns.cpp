#include<iostream>
#include<assert.h>
using namespace std;

int main(){

//1.PRINT SQUARE
   //NEW ROW SATHI
    // for(int i=0; i<4; i++){
        //STAR PRINT KARAYALA
    //     for(int j=0; j<4;j++){
    //         cout<< "* " ;
    //     }
    //     cout<< endl;
    // }

//2.PRINT RECTANGLE
    // for(int i=0;i<3; i++){
    //     for(int j=0; j<5; j++){
    //         cout<<"* ";
    //     }
    //     //cout<< endl;
    // }


//3.HOLLOW RECTANGLE
    // int ROWS= 10;
    // int COL=7;
    // for(int row=0; row<ROWS; row++){
    //     for(int col=0; col<COL; col++){
    //         if(row==0 || row==ROWS-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             if(col==0 || col==COL-1){
    //                 cout<<"* ";
    //             }
    //             else{
    //                 cout<<"  ";
    //             }
    //         }  
    //     }
    //     cout<<endl;
    //    }



//4.HALF PYRAMID
    // int n;
    // cin>> n;

    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row++; col++){
    //         cout<<"* ";
    //     }
    //     cout<< endl;
    // }


//5.INVERTED HALF PYRAMID
    // int n;
    // cin>>n;
    // for(int row=0; row < n; row++ ){
    //     //inner loop to print stars
    //     for(int col = 0; col < (n-row); col++){
    //         cout<<"*  ";
    //     }
    //     cout<< endl;
    // }



//6.NUMERIC HALF PYRAMID
    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout<< col+1 <<" ";
    //     }
    //     cout<< endl;
    // }


//7.INVERTED HALF PYRAMID
    // int n;
    // cin>>n;
    // for(int row=0; row < n; row++){
    //     for(int col=0; col< (n-row); col++){
    //         cout<< col+1 <<" ";
    //     }
    //     cout<< endl;
    // }



//8.FULL PYRAMID
    // int n;
    // cin>>n;

    // for(int row=0; row<n; row++){
    //     //sp or star ke liye
    //     //pehele spaces hai to woh print kr lenge
    //     for(int col=0; col< n-row-1; col++){
    //         cout<< " ";
    //     }
    //     //star ke print kr lenge ab
    //     for(int col=0; col< row+1; col++){
    //         cout<< "* ";
    //     } 
    //     cout<< endl;
    // }
   


//9.INVERRTED FULL PPYRAMID
    // int n;
    // cin>> n;
    
    // for(int row=0; row < n; row++){
    //     //pehele space hai to wo print kr lenge
    //     for(int col=0; col< row; col++){
    //         cout<<" ";
    //     }
    //     //ab stars print kr lenge
    //     for(int col=0; col< n-row; col++){
    //         cout<<"* ";
    //     }
    //     cout<< endl;
    // }



//10.DIAMOND SHAPE   
    // int num;
    // cin>>num;
    // int n = num/2;
    // for(int row=0; row<n; row++){
    //     //sp or star ke liye
    //     //pehele spaces hai to woh print kr lenge
    //     for(int col=0; col< n-row-1; col++){
    //         cout<< " ";
    //     }
    //     //star ke print kr lenge ab
    //     for(int col=0; col< row+1; col++){
    //         cout<< "* ";
    //     } 
    //     cout<< endl;
    // }
    // for(int row=0; row < n; row++){
    //     //pehele space hai to wo print kr lenge
    //     for(int col=0; col< row; col++){
    //         cout<<" ";
    //     }
    //     //ab stars print kr lenge
    //     for(int col=0; col< n-row; col++){
    //         cout<<"* ";
    //     }
    //     cout<< endl;
    // }


//11. HOLLOW PYRAMID
    // int n;
    // cin>> n;
    // for(int row=0; row< n; row++){
    //     //space print kr do
    //     for(int col=0;  col< n- row-1; col++){
    //         cout<< " ";
    //     }
    //     //stars
    //     for(int col=0; col < row+1; col++){
    //         //print star for first and last col
    //         if(col==0 || col==row + 1 -1){
    //             cout << "* ";
    //         }
    //         else{
    //             //for every cl between first and last col
    //             cout<<"  ";
    //         }
           
    //     }
    //     cout<< endl;
    // }


//12.INVERTED HOLLOW PYRAMID
    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     //space
    //     for(int col=0; col < row; col++){
    //         cout<< " ";
    //     }
    //     //star
    //     int totalCOl = n-row;
    //     for(int col=0; col < totalCOl; col++ ){
    //         //if first or last col then print star
    //         if( col == 0 || col == (totalCOl-1)){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<< "  ";
    //         }
            
    //     }
    //     cout<< endl;
    // }     



//13. HOLLOW DIAMONd
    // int n;
    // cin>> n;
    // for(int row=0; row< n; row++){
    //     //space print kr do
    //     for(int col=0;  col< n- row-1; col++){
    //         cout<< " ";
    //     }
    //     //stars
    //     for(int col=0; col < row+1; col++){
    //         //print star for first and last col
    //         if(col==0 || col==row + 1 -1){
    //             cout << "* ";
    //         }
    //         else{
    //             //for every cl between first and last col
    //             cout<<"  ";
    //         }
           
    //     }
    //     cout<< endl;
    // }
    
    // //inverted hollow pyramid
    // for(int row=0; row< n ;row++){
    //     //space
    //     for(int col=0; col< row; col++){
    //         cout<<" ";
    //     }
    //     //star
    //     int totalCOl = n-row;
    //     for(int col=0; col< totalCOl; col++){
    //         if( col==0 || col == (totalCOl-1)){
    //             cout<< "* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<< endl;
    // }



//14. FLIPPED SOLID DIAMOND 
//     int num;
//     cin>> num;
//     int n = num/2;

    
//     for(int row=0; row< n; row++){
//         //1. inverted pyramid 1
//         for(int col=0; col< n-row ; col++){
//             cout<< "*"; 
//         }
    
//         //2.full pyramid 1
//         for(int col=0; col< (2*row)+1; col++){
//             cout<< " ";
//         }


//     //3.inverted pyramid 2
//         for(int col=0; col< n-row; col++ ){
//             cout<< "*";
//         }
//         cout << endl;
    


//     }

// //code for remaining half part
//     for(int row=0; row< n; row++){
//         //1. inverted pyramid 1
//         for(int col=0; col< row+1 ; col++){
//             cout<< "*"; 
//         }
    
//         //2.full pyramid 1
//         for(int col=0; col< ((2*n) - (2*row) - 1); col++){
//             cout<< " ";
//         }


//     //3.inverted pyramid 2
//         for(int col=0; col< row+1; col++ ){
//             cout<< "*";
//         }
//         cout << endl;
//     }



//15.
    //  int n;
    //  cin>> n;
    // //  for(int row=0; row<n ;row++){
    // //     //inner loop
    // //     for(int col=0; col< 2*row+1; col++){
    // //         if(col%2 == 1){
    // //             cout<<"*";
    // //         }
    // //         else{
    // //             cout<< row+1;
    // //         }
    // //     }
    // //      cout<< endl;
    // //  }


    // for(int row=0; row<n; row++){
    //     int totalCol = row+1;
    //     for( int col=0; col< totalCol; col++){
    //         if( col == totalCol-1){
    //             cout << row+1;
    //         }
    //         else{
    //              cout<<row+1 << "*";
    //         }
           
    //     }
    //     cout<< endl;
    // }



//16. INVERTED HALF HOLLOW PYRAMID
    // int n;
    // cin>> n;

    // for(int row=0; row<n; row++){
    //     int totalCol = n-row-1;
    //     for(int col=0; col< n-row; col++){
    //         if(row == 0 || row == n-1){
    //             cout<<"*";
    //         }
    //         else{
    //             if(col ==0 || col==n-row-1){
    //                 cout<<"* ";
    //             }
    //             else{
    //                 cout<<" ";
    //             }
    //         }
    //     }
    //       cout<<endl;
    // }


//17.
    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     //inner loop
    //     for(int col=0; col< row-1; row++){
    //         if(col==0){
    //             cout<< 1;
    //         }
    //         else if(col== row+1){
    //             cout<< row+1;
    //         }
    //         // else if(row==0){
    //         //     cout<<1;
    //         // }
    //         else if(row==4){
    //             cout<< 12345;
    //         }
    //         else{
    //             cout<<'-';
    //         }
    //     }
    //     cout<< endl;
    // }



//18. ABCD PYRAMID
    // int n;
    // cin>>n;

    // for(int row=0; row<n; row++){
    //     char ch;
    //     for(int col=0; col<row+1; col++){
    //         int number = col+1;
    //         ch = number + 'A' - 1;
    //         cout<< ch;
    //     }
    //     //jabtak A tak nahio pohochte tab tak nahi rukenge
    //     //print kare rahenge
    //     for(char alphabet = ch; alphabet > 'A'; ){
    //         alphabet--;
    //         cout << alphabet;
    //     }
    //     cout<< endl;
    // }



//18.BUTTERFLY PATTERNS
    //     int n;
    //     cin>>n;
    //  //first half
    //     for(int row=0; row<n; row++){
    //         //half pyramid
    //         for(int col=0; col< row+1; col++){
    //             cout<< "*";
    //         }
    //         //flipped space triangle
    //         for(int col=0; col< 2*n-2*row-2; col++){
    //             cout<<" ";
    //         }
    //         // flipped half pyramid
    //         for(int col=0; col <= row; col++){
    //             cout<<"*";
    //         }
    //         cout<< endl;
    //     }
    // //second half
    //     for(int row=0; row<n; row++){
    //         //first flipped half pyramid
    //         for(int col=0; col< n-row; col++){
    //             cout<<"*";
    //         }
    //         //triangle spaces
    //         for(int col=0; col< 2*row; col++){
    //             cout<<" ";
    //         }
    //         //remained flipped half pyramid
    //         for(int col=0; col < n-row ; col++){
    //             cout<<"*";
    //         }
    //         cout<< endl;
            
    //     }



//19.FLOYD'S TRIANGLE
    // int n;
    // cin>>n;
    // int counter =1;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col <= row; col++ ){
    //         cout<<counter<<" ";
    //         counter++;
    //     } 
    //     cout<< endl;
    // }




//20. SOLID HALF DIAMOND
    // int n;
    // cin>>n;

    // for(int row=0; row< (2*n-1); row++){
    //     int condition = 0;
    //     if( row< n){
    //         //growing diamond
    //         condition = row;
    //     }
    //     else{
    //         //shrinking phase of diamond
    //         condition = n - (row%n) - 2;
    //     }
    //     for(int col = 0; col <= condition; col++){
    //         cout<<"*";
    //     }
    //     cout<< endl;
    // }



//21. FANCY PATTERN 1
    // int n;
    // cin>>n;
    // // if(n > 9){
    // //     cout<<"Please put value less or equal to 9";
    // //     return 0;
    // // }
    // assert(n<=9);
    // for(int row=0; row<n; row++){
    //     int startNumIndex = 8 - row;
    //     int num = row + 1;
    //     int countNum = num;
    //     for(int col=0; col < 17; col++){
    //         if(col == startNumIndex && countNum > 0){
    //             cout<< num;
    //             startNumIndex+=2;
    //             countNum--;
    //         }
    //         else{
    //             cout<<"*";
    //         }

    //     }
    //     cout<< endl;
    // }

    


//22.
    int n;
    cin>>n;
   
     int c=1;
    for(int row=0; row<n; row++){
    //1.growing phase
        for(int col=0; col<=row; col++){
            cout << " " << c;
            c++;
        }
    cout<< endl;
    }
    int start =  (c-n);
    int k =  start;;
    for(int row=0; row< n; row++){
        //0th col pe apni full length mein chalega
        //for 1st col mein full length-1 chaleha
        //full l;ength hai (n-row) (do it uk how to)
        for(int col=0; col< n-row-1; col++){
            cout<<" " <<k;
            k++;
            
        }
        start = start -(n-row-1);
        cout<< endl;
    }
        








    return 0;
     }
   












