//第十六題修正
#include <iostream>
#include <string>

using namespace std;

int countSubstring(string str, string subStr) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(subStr, pos)) != string::npos) {
        count++;
        //pos += subStr.length();
        pos++;//按照題目要求，搜尋的字串應該是一個字元一個字元的跳，例如：第一個字串為aa,第二個字串為aaa123bbab,它會找到[aa]a123bbab和a[aa]123bbab
    }
    return count;
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    int count = countSubstring(str2, str1);
    cout << count<< endl;

    return 0;
}