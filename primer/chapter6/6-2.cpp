#include <iostream>
#include <string>

using namespace std;

/**
 * 引用传递
 */
void reset(int &i);

bool isShorter(const string &s1 , const string &s2);

/**
 * 返回s中c第一次出现的索引的出现的次数
 */
string::size_type findChar(const string &s ,const char &c ,  string::size_type &occurs);

void print(const int *begin ,const int *end);
void print(int (&arr)[3]);

const int &returnReference();

/**
 *  参数传递
 */
int main() {
    int i = 100;
    reset(i);
    cout<< i << " " << endl;

    cout<< isShorter("hi","hwllo") << endl;

    unsigned  occurs = 0;
    cout<< findChar("hello",'l',occurs) << " " << endl;
    cout<< "出现了：" <<occurs <<"次" << endl;

    int a[3] = {0 ,1 ,2};
    print(begin(a),end(a));

    print(a);

    int i1  = returnReference();
    cout<< i1 << " " << endl;

}

/**
 * 引用传递
 */
void reset(int &i){
    i = 0;
}

bool isShorter(const string &s1 , const string &s2){
    return s1.size() < s2.size();
}
/**
 * 返回s中c第一次出现的索引的出现的次数
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