#include <iostream>
#include <vector>
#include <string>
#include <cctype>

void iter();
void toUpperCase();

using namespace std;
/**
 * ������
 */
int main() {
    iter();
    toUpperCase();
}



void iter() {
    vector<string> v;
    cout<< v.size()<< endl;
    auto begin = v.begin(), end = v.end();
    bool f  = begin == end; //����Ϊ�� begin �� end ���ص���ͬһ��������
    cout<< f <<endl;
}

void toUpperCase(){
    string s = "hello world";
    for(auto iter = s.begin();iter != s.end();iter++){
        *iter = (char) toupper(*iter);
    }
    cout<< s << " " << endl;


}#include <iostream>
#include <vector>
#include <string>
#include <cctype>

void iter();
void toUpperCase();

using namespace std;
/**
 * ������
 */
int main() {
    iter();
    toUpperCase();
}



void iter() {
    vector<string> v;
    cout<< v.size()<< endl;
    auto begin = v.begin(), end = v.end();
    bool f  = begin == end; //����Ϊ�� begin �� end ���ص���ͬһ��������
    cout<< f <<endl;
}

void toUpperCase(){
    string s = "hello world";
    for(auto iter = s.begin();iter != s.end();iter++){
        *iter = (char) toupper(*iter);
    }
    cout<< s << " " << endl;


}