#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){//32~125
    string as="!@#$%^&*()_++1234567890-=={}||qwertyuiop[]\\:""asdfghjkl;''<>??zxcvbnm,.//";
    string in;
    getline(cin,in);
    
    for(int i=0;i<in.size();i++){
        in[i]=tolower(in[i]);
        for(int j=0;j<as.size();j++){
            if(in[i]==' '){
                break;
            }
            else if(in[i]==as[j]){
                in[i]=as[j+1];
                break;
            }
        }
        cout<<in[i];
    }
    cout<<endl;
}