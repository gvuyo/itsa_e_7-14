#include <iostream>
#include <string>
using namespace std;
int main() {
    int n,max=0;
    int s[30],d[30];
    int time[25]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i]>>d[i];
       for (int j = s[i];j < d[i]; j++)
		{
			time[j]++;
		}
		for (int k = 0;k < 25; k++)
		{
			if (time[k] > max)
			max = time[k];
		}
	}
	cout << max << endl;
    return 0;
}