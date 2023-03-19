#include <iostream>  
using namespace std;  
  
// 複數的類別定義  
class Complex {  
private:  
    int re, im; // 複數的實部與虛部  
public:  
    Complex(int r = 0, int i = 0) {  
        re = r;  
        im = i;  
    }  
  
    Complex operator + (Complex const& obj) {  
        Complex result;  
        result.re = re + obj.re;  
        result.im = im + obj.im;  
        return result;  
    }  
  
    Complex operator - (Complex const& obj) {  
        Complex result;  
        result.re = re - obj.re;  
        result.im = im - obj.im;  
        return result;  
    }  
  
    Complex operator * (Complex const& obj) {  
        Complex result;  
        result.re = re * obj.re - im * obj.im;  
        result.im = re * obj.im + im * obj.re;  
        return result;  
    }  
  
    void display() {  
        cout << re << " " << im << endl;  
    }  
};  
  
int main()  
{  
    int n;  
    Complex c[10];  
  
    cin >> n;  
    for (int i = 0; i < n; i++) {  
        char oper;  
        int ar, ai, br, bi;  
        cin >> oper >> ar >> ai >> br >> bi;  
        Complex a(ar, ai);  
        Complex b(br, bi);  
  
        switch (oper) {  
        case '+':  
            c[i] = a + b;  
            break;  
        case '-':  
            c[i] = a - b;  
            break;  
        case '*':  
            c[i] = a * b;  
            break;  
        }  
    }  
  
    for (int i = 0; i < n; i++) {  
        c[i].display();  
    }  
}