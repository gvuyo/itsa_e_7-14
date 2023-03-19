#include <iostream>  
using namespace std;  
  
bool isPrime(int p) {  
    //判斷p是否為質數  
    if (p <= 1) return false;  
    for (int i = 2; i < p; i++) {  
        if (p % i == 0) return false;  
    }  
    return true;  
}  
  
int main()  
{  
    int n;  
    cin >> n;  
  
    //判斷並輸出  
    if (isPrime(n))  
        cout << "YES" << endl;  
    else  
        cout << "NO" << endl;  
  
    return 0;  
}