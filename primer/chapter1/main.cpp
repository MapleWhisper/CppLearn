#include <iostream>


using namespace std;




void initSize(int height = 20,int width = 30){
    cout<< "height:" << height <<" width:" << width << endl;
}
/**
 * ��������
 */
inline int sum(int x ,int y ){
    return x+y;
}


/**
 * ������;��������
 */
int main() {

    initSize();
    initSize(100);

    cout<< sum(10,20) << " " << endl;


}


