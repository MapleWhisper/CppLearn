#include <iostream>

void iter();

using namespace std;
/**
 * 多维数组
 */
int main() {

    iter();
    return 0;
}

void iter(){
    const int rowCnt = 2;
    const int colCnt = 3;
    int a[rowCnt][colCnt]{0,1,2,3,4,5};


    //使用范围for循环
    for(auto &row : a){
        for(auto &col : row){
            cout<< col << " ";
        }
        cout<< endl;
    }
    //使用范围for循环
    for(auto &row : a){
        for(auto col : row){
            cout<< col << " ";
        }
        cout<< endl;
    }

    //范围for循环 如果不声明为引用类型 默认类型为 int*类型
    for(auto row : a ){
        cout<< *row << " ";
        cout<< *(row+1) << " ";
    }
    cout<< endl;
    //int (*p)[4];  通过指针来遍历数组 p为指向含有4个整数的指针
    for(auto p=a; p!=a+rowCnt ; p++){
        for(auto q=*p ; q!= *p+colCnt ; q++){   //q指向p的首地址 所以q指向一个整数
            cout<< *q << " ";
        }
        cout<< endl;
    }

    //显示的使用指针来遍历二维数组
    int (*p)[colCnt] = a;
    for( p=a;p!=a+rowCnt;p++){
        for(int *q = *p; q!=*p+colCnt;q++){
            cout<< *q << " ";
        }
        cout<< endl;
    }

    //使用标准库函数 begin end 来遍历二维数组
    for(auto p = begin(a); p!= end(a) ; p++){
        for(auto q = begin(*p) ; q!= end(*p); q++){
            cout<< *q << " ";
        }
        cout<< endl;
    }

}

