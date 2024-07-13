#include<iostream>
using namespace std;
int main(){
int n;
cin>> n;
 for( int i =1; i<=n ; i++){
    for(int k= n-i; k>0; k--){
        cout << "  ";
    }
    for(int j =1; j<= 2*i-1; j++){
        cout << "* ";
    }
    cout << endl;
 }
 // pattern mirroring 
for( int i =n-1; i>0 ; i--){
    for(int k= n-i; k>0; k--){
        cout << "  ";
    }
    for(int j =1; j<= 2*i-1; j++){
        cout << "* ";
    }
    cout << endl;
 }

return 0;
}
                        //sir ka CODE:
//  for (int rows=1 ; rows<=n ; rows++){
//      for(int spaces=1; spaces<=n-rows; spaces++){
//         cout << "  " ;
//      }
//          for(int stars=1; stars<=2*rows-1; stars++ ){
//          cout << "* " ;
//  }
// cout<< endl;
//  }
//  //pattern mirroring
//  for (int rows=n-1 ; rows>=1; rows--){
//      for(int spaces=1; spaces<=n-rows; spaces++){
//         cout << "  " ;
//      }
//          for(int stars=1; stars<=2*rows-1; stars++ ){
//          cout << "* " ;
//  }
// cout<< endl;
//  }
// return 0;
//  }