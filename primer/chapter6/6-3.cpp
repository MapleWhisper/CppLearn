#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

const string &returnReference();

vector<string> getVector();

/**
 * ��������
 */
int main() {

    vector<string> v = getVector();
    for(string s : v){
        cout<< s << " ";
    }
    cout<< " " << endl;

    return EXIT_SUCCESS;


}

/**
 * ���� �������ڷ��ؾֲ����������ú�ָ��
 * warning: reference to local variable 's' returned
 */
const string &returnReference(){
    string  s  = "hello world";
    return s;
}

/**
 * �б��ʼ������ֵ
 */
vector<string> getVector(){
    return {"hello","world","hello","C++"};
}



