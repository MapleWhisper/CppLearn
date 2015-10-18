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