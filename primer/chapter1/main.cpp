#include <iostream>


using namespace std;




void initSize(int height = 20,int width = 30){
    cout<< "height:" << height <<" width:" << width << endl;
}
/**
 * 内联函数
 */
inline int sum(int x ,int y ){
    return x+y;
}


/**
 * 特殊用途语言特性
 */
int main() {

    initSize();
    initSize(100);

    cout<< sum(10,20) << " " << endl;


}


