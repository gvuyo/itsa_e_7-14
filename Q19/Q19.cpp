#include <iostream>
using namespace std;
int main()
{
 int n = 0, t[24] = { 0 };//一天24小時 
 cin >> n;
 for (int i = 0; i < n; i++)//因為(返回時間恆大於出發時間)，故依輸入時間依序填格子 
 {
  int s = 0, d = 0;
  cin >> s >> d;
  for (int j = s - 1; j < d - 1; j++)
  {
   t[j]++;
  }
 }
 n = t[0];//將不需要的空間再次利用 
 for (int i = 0; i < 24; i++) //尋最大值
 {
  if (n < t[i]) n = t[i];
 }
 cout << n << endl;

 return 0;
}