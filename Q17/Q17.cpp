#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int i=0,og=0;
    string txt;
    string dir;
    string dir1[20];
    getline(cin,txt);
    istringstream ss(txt);
    while (getline(ss,dir,' '))
    {
        dir[0]=tolower(dir[0]);
        /*if(dir[0]<'Z'){
            dir[0]=dir[0]+32;
        }*/
        dir1[i]=dir;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        for(int k=j-1;k>-1;k--){
                if( dir1[j]==dir1[k])
                {
                    og=1;
                    break;
                }
            }
            if(j==0)
                cout<<dir1[j];
            else if(og==1){
                og=0;
            }
            else{
                cout<<" "<<dir1[j];
            }
        
    }
    cout<<endl;    
}