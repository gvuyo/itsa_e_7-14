#include <iostream>  
#include<iomanip>  
using namespace std;  
  
int main() {  
    
    double num[10];  
    double max;  
    double min;  
    for(int i = 0;i < 10;i++)  
    {  
        cin >> num[i];  
        if(i == 0)  
        {  
            max = num[i];  
            min = num[i];  
        }  
        else  
        {  
            if(num[i] > max)  
            {  
                max = num[i];  
            }  
            if(num[i] < min)  
            {  
                min = num[i];  
            }  
        }  
    }  
    cout << fixed << setprecision(2) << "maximum:" << max << endl;  
    cout << fixed << setprecision(2) << "minimum:" << min << endl;  
    return 0;  
}