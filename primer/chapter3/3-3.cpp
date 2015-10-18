#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main() {
    vector<string> v(2);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for(unsigned i =0 ;i<v.size();i++){
        for(char &c : v[i]){
            c = (char) toupper(c);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}