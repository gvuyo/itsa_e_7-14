#include <iostream>
using namespace std;
int main()
{
 long long change, n, a1, a2, a3, b1 = 0, b2 = 0, b3 = 0, sum = 0;
 char ch;
 cin >> n >> ch >> a1 >> ch >> a2 >> ch >> a3;
 sum = a1 * 15 + a2 * 20 + a3 * 30;
 change = n - sum;
 if (n < sum) {
  cout << "0" << endl;
 }
 else {
  while (change >= 50) {
   b1++;
   change = change - 50;
  }
  while (change >= 5) {
   b2++;
   change = change - 5;
  }
  while (change >= 1) {
   b3++;
   change = change - 1;
  }
  cout << b3 << "," << b2 << "," << b1 << endl;
 }

 return 0;
}