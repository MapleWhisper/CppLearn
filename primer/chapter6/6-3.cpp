#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

const string &returnReference();

vector<string> getVector();

/**
 * 返回类型
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
 * 错误 不可以在返回局部变量的引用和指针
 * warning: reference to local variable 's' returned
 */
const string &returnReference(){
    string  s  = "hello world";
    return s;
}

/**
 * 列表初始化返回值
 */
vector<string> getVector(){
    return {"hello","world","hello","C++"};
}



