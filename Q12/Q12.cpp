#include <iostream>
using namespace std;

int f(int n) 
{
    if (n == 0 || n == 1)
    {
        return n + 1;
    }
    return f(n - 1) + f(n / 2);
}

int main() 
{
    int k;
    //cout << "輸入K：";
    cin >> k;
    cout << f(k) << endl;
    return 0;
}
/*當使用者輸入一個整數 k 時，程式會呼叫函式印出結果。*/