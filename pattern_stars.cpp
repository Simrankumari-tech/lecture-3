#include <iostream>
using namespace std;
int main (){
    int n,i ; 
    cin >> n;
for(i=1 ;i<=n ; i++){
for(int stars=1; stars<=i ; stars++){
    cout << "*" ;
}
cout << " ";
    for(int stars=1; stars<=n-i+1;stars++){
        cout << "*" ;
    }
    cout << " ";
    for(int stars=1; stars<=n-i+1 ; stars++){
    cout << "*" ;
}
cout << " ";
for(int stars=1; stars<=i ; stars++){
    cout << "*" ;
}
cout << " ";
cout << endl;
}
 return 0;
}
// for (int i=1; i<=n; i++){
//     for(int stars=1; stars<=i; stars++){ //first stars
//         cout << "*" ;
//     }
//     cout<< " " ; //second spaces
//     for(int stars=1;stars<= n-i+1;stars++){ // 3rd stars
//         cout << "*" ;
//     }
//     cout << " " ; //4th spaces

// for(int stars=1;stars<= n-i+1;stars++){ // 5rd stars
//         cout << "*" ;
//     }
//     cout << " " ; //6th spaces
   
//     for(int stars=1; stars<=i; stars++){ //7th stars
//         cout << "*" ;
//     }
//     cout<< endl;
// }
// return 0;
// }
