#include <iostream>
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b) {
		while (a!=0 && b!=0)
		{
			if (a >= b) {
				a = a % b;
			}
			else if (a < b) {
				b = b % a;
			}
		}
		if (a >= b){
			cout << a << endl;
		}
		else {
			cout << b << endl;
		}
	}
}