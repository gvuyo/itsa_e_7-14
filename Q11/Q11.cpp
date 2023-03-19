#include <iostream>
#include <vector>
using namespace std;

int main()
{
	/*輸入矩陣的行與列*/
	int a, b;
	cin >> a >> b;

	/*輸入陣列元素*/
	vector<vector<int>> arr(a, vector<int>(b));
	for (int i = 0; i < a; i++) 
	{
		for (int j = 0; j < b; j++) 
		{
			cin >> arr[i][j];
		}
	}

	/*反轉矩陣*/
	vector<vector<int>> arr_reversed(b, vector<int>(a));
	for (int i = 0; i < b; i++) 
	{
		for (int j = 0; j < a; j++) 
		{
			arr_reversed[i][j] = arr[j][i];
		}
	}

	/*輸出*/
	for (int i = 0; i < b; i++) 
	{
		for (int j = 0; j < a; j++) 
		{
			if(j<a-1)cout << arr_reversed[i][j] << " ";
            else cout << arr_reversed[i][j];
		}
        cout << endl;
	}

	return 0;
}