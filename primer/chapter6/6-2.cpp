#include <iostream>
#include <string>

using namespace std;

/**
 * ���ô���
 */
void reset(int &i);

bool isShorter(const string &s1 , const string &s2);

/**
 * ����s��c��һ�γ��ֵ������ĳ��ֵĴ���
 */
string::size_type findChar(const string &s ,const char &c ,  string::size_type &occurs);

void print(const int *begin ,const int *end);
void print(int (&arr)[3]);

const int &returnReference();

/**
 *  ��������
 */
int main() {
    int i = 100;
    reset(i);
    cout<< i << " " << endl;

    cout<< isShorter("hi","hwllo") << endl;

    unsigned  occurs = 0;
    cout<< findChar("hello",'l',occurs) << " " << endl;
    cout<< "�����ˣ�" <<occurs <<"��" << endl;

    int a[3] = {0 ,1 ,2};
    print(begin(a),end(a));

    print(a);

    int i1  = returnReference();
    cout<< i1 << " " << endl;

}

/**
 * ���ô���
 */
void reset(int &i){
    i = 0;
}

bool isShorter(const string &s1 , const string &s2){
    return s1.size() < s2.size();
}
/**
 * ����s��c��һ�γ��ֵ������ĳ��ֵĴ���
 */
string::size_type findChar(const string &s ,const char &c ,  string::size_type &occurs){
    auto ret = s.size();
    occurs = 0;
    for(decltype(ret) i=0 ; i<s.size() ; i++){
        if(s[i] == c){
            if(ret == s.size()){
                ret = i;
            }
            ++occurs;
        }
    }
    return ret;

}

void print(const int *begin ,const int *end){
    for(const int *i = begin;i!= end ;i++){
        cout<< *i << " ";
    }
    cout << endl;
}

void print(int (&arr)[3]){
    for(auto elem : arr){
        cout<< elem << " ";
    }
    cout << endl;
}

const int &returnReference(){
    int i = 100;
    return i;
}