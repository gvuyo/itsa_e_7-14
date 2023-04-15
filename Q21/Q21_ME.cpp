#include <iostream>
#include<iomanip>  
using namespace std;
int main(){
    float t[10]={0};
    float max,min;
    for(int i=0;i<10;i++){
      cin>>t[i];
      if(i == 0)  
        {  
            max = t[i];  
            min = t[i];  
        }  
        else  
        {  
            if(t[i] > max)  
            {  
                max = t[i];  
            }  
            if(t[i] < min)  
            {  
                min = t[i];  
            }  
        }  
    }
    cout<<fixed << setprecision(2) <<"maximum:"<<max<<endl;
    cout<<fixed << setprecision(2) <<"maximum:"<<min<<endl;

}
