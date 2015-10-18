#include <iostream>

void iter();

using namespace std;
/**
 * ��ά����
 */
int main() {

    iter();
    return 0;
}

void iter(){
    const int rowCnt = 2;
    const int colCnt = 3;
    int a[rowCnt][colCnt]{0,1,2,3,4,5};


    //ʹ�÷�Χforѭ��
    for(auto &row : a){
        for(auto &col : row){
            cout<< col << " ";
        }
        cout<< endl;
    }
    //ʹ�÷�Χforѭ��
    for(auto &row : a){
        for(auto col : row){
            cout<< col << " ";
        }
        cout<< endl;
    }

    //��Χforѭ�� ���������Ϊ�������� Ĭ������Ϊ int*����
    for(auto row : a ){
        cout<< *row << " ";
        cout<< *(row+1) << " ";
    }
    cout<< endl;
    //int (*p)[4];  ͨ��ָ������������ pΪָ����4��������ָ��
    for(auto p=a; p!=a+rowCnt ; p++){
        for(auto q=*p ; q!= *p+colCnt ; q++){   //qָ��p���׵�ַ ����qָ��һ������
            cout<< *q << " ";
        }
        cout<< endl;
    }

    //��ʾ��ʹ��ָ����������ά����
    int (*p)[colCnt] = a;
    for( p=a;p!=a+rowCnt;p++){
        for(int *q = *p; q!=*p+colCnt;q++){
            cout<< *q << " ";
        }
        cout<< endl;
    }

    //ʹ�ñ�׼�⺯�� begin end ��������ά����
    for(auto p = begin(a); p!= end(a) ; p++){
        for(auto q = begin(*p) ; q!= end(*p); q++){
            cout<< *q << " ";
        }
        cout<< endl;
    }

}

