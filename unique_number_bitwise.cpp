#include <iostream>
using namespace std;
int main(){
int no ,i ,n;
cin >> n;
int ans = 0;
for(int i = 1; i<=n ; i++){
    cin >> no;
    ans ^= no ;
}
cout << "unique number is :" << ans << endl;
return 0;
}