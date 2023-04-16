#include <iostream>
using namespace std;
int main()
{
 int arr[3][3];
 for (int i = 0; i < 3; i++)
 {
  cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
  if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])//橫排 
  {
   cout << "True" << endl; return 0;
  }
 }
 for (int x = 0; x < 3; x++)//直行 
 {
  if (arr[0][x] == arr[1][x] && arr[1][x] == arr[2][x])
  {
   cout << "True" << endl; return 0;
  }
 }
 if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])//反斜線 
 {
  cout << "True" << endl; return 0;
 }
 else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])//斜線 
 {
  cout << "True" << endl; return 0;
 }
 else cout << "False" << endl; return 0;//都沒有
}