#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int i=0,q=0,og=0;
    string txt;
    string dir;
    string dir1[20],ac[20];
    getline(cin,txt);
    istringstream ss(txt);
    while (getline(ss,dir,' '))
    {
        dir[0]=tolower(dir[0]);
        dir1[i]=dir;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        for(int k=j-1;k>=-1;k--){
            if( dir1[j]==dir1[k]){
                og=1;
                break;
            }
        }
        if(og==0){
        ac[q]=dir1[j];
        q++;
        }
        og=0;    
    }
    for(int x=0;x<q;x++){
        if(x==q-1)
            cout<<ac[x]<<endl;
        else
            cout<<ac[x]<<" ";
    }    
    return 0;
}