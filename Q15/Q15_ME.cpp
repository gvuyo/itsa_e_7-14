#include <iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	string drt;
	string drt_R;
	int arr[26]={0};
	int NN=0,II;
	getline(cin, drt);
	istringstream is(drt);
	while (getline(is, drt_R, ' '))NN++;
	II = sizeof(drt);
	int i;
	for (i = 0; drt[i] != 0; i++) {
		if (drt[i] >= 'a' && drt[i] <= 'z')
			arr[int(drt[i])-97]++;
		if (drt[i] >= 'A' && drt[i] <= 'Z')
			arr[int(drt[i]) - 65]++;
	}
	cout << NN<<endl;
	for (i = 0; i < 26; i++) {
		if (i < 25) {
			if (arr[i] != 0) {
				if(i<25)
					cout << char(97 + i) << ":" << arr[i] << endl;
				else
					cout << char(97 + i) << ":" << arr[i];
			}
		}
	}
}