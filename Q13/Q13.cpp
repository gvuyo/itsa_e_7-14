#include <iostream>
#include <string.h>
#include <string>
#include <sstream>
#include <cstdlib>
#include <stdio.h>
#include <vector>
using namespace std;
int display(char a){
    int d=0;
    switch (a)
    {
    case 'S':
        d=300;
        break;
    case 'H':
        d=200;
        break;
    case 'D':
        d=100;
        break;
    }
    return d;
}
int main() {
    int n=3,jr[10];
    string  list[10];//[3]={"D3 H5 D12 C10","D12 H1 S2","H9 D9 C9 C1" };     
    string dir;
    string Card[20][20];
    int D[20][20];
    int j=0;
    cin>>n;
        cin.ignore(1,'\n');
        for(int i=0;i<n;i++){
            getline(cin,list[i]);
            istringstream ss(list[i]);
            while (getline(ss,dir,' '))
            {
                Card[i][j]=dir;
                if(dir.size()==3){
                    D[i][j]=0;
                    D[i][j]=display(dir[0]);
                    D[i][j]=D[i][j]+stoi(dir.substr(1));
                }
                else  if(dir.size()==2){
                    D[i][j]=0;
                    D[i][j]=display(dir[0]);
                    D[i][j]=D[i][j]+stoi(dir.substr(1));
                    //cout<<"size=2-"<<j<<"-"<<D[j]<<endl;
                }
                j++;
            }
            for(int x=0;x<j;x++){
                for(int y=0;y<j-1;y++){
                    string t;
                    int d;
                    if(D[i][x]>D[i][y]){
                        d=D[i][x];
                        D[i][x]=D[i][y];
                        D[i][y]=d;
                        t=Card[i][x];
                        Card[i][x]=Card[i][y];
                        Card[i][y]=t;
                    }
                }
            }
            jr[i]=j;
            j=0;
        }
    for(int p=0;p<n;p++){
        for (int q=0; q<jr[p]; q++)
            {
                if(jr[p]-1>q)cout<<Card[p][q]<<" ";
                else {
                    if(p==n-1)cout<<Card[p][q];
                    else cout<<Card[p][q]<<endl;
                    }
            } 
    }

    return 0;
}