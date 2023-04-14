#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void countWordsAndLetters(string text, int& wordCount, unordered_map<char, int>& letterCount) {
    // 初始化計數器
    wordCount = 0;
    letterCount.clear();

    // 將字串分割成單字
    size_t start = 0, end = 0;
    while ((end = text.find_first_of(" ,.", start)) != string::npos) {
        // 計算單字數量
        wordCount++;

        // 計算字母出現次數
        for (size_t i = start; i < end; i++) {
            char letter = tolower(text[i]);
            if (letterCount.find(letter) == letterCount.end()) {
                letterCount[letter] = 1;
            }
            else {
                letterCount[letter]++;
            }
        }

        // 跳過分隔符號
        start = end + 1;
    }

    if (start < text.length()) {
        wordCount++;
        for (size_t i = start; i < text.length(); i++) {
            char letter = tolower(text[i]);
            if (letterCount.find(letter) == letterCount.end()) {
                letterCount[letter] = 1;
            }
            else {
                letterCount[letter]++;
            }
        }
    }
}

int main() {
    string text;
    //cout << "";
    getline(cin, text);

    int wordCount;
    unordered_map<char, int> letterCount;

    countWordsAndLetters(text, wordCount, letterCount);

    // 輸出結果
    cout << wordCount << endl;
    for (char letter = 'a'; letter <= 'z'; letter++) {
        if (letterCount.find(letter) != letterCount.end()) {
            cout << letter << ": " << letterCount[letter] << endl;
        }
    }

    return 0;
}