#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

void localStaticObject();
unsigned cnt_calls();

/**
 *  ��������
 */
int main() {

    localStaticObject();

}

/**
 * �ֲ���̬����
 */
void localStaticObject(){
    for(int i=0;i<10;i++){
        cout<< cnt_calls() << " ";
    }
}

unsigned cnt_calls(){

    static unsigned  i = 0;
    return ++i;
}