#include<iostream>
using namespace std  ;
int main(){
 int n;
 cin >> n;
 char s[n + 1];
for (int k = 0; k <= n; k++) {
  *(s + k) = cin.get();
}


    for(int r = n ; r >= 0; r--)
     cout << *(s + r);

}