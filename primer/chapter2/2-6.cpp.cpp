#include <iostream>
#include "SaleDate.h"

using namespace std;

int main() {
    SalesDate data1,data2;
    double price = 0;
    cin>>data1.bookNO>>data1.units_sold>>price;
    data1.revenue = data1.units_sold * price;
    cout<<data1.bookNO<<" "<<data1.units_sold<<" "<<data1.revenue<<endl;

    cin>>data2.bookNO>>data2.units_sold>>price;
    data2.revenue = data2.units_sold * price;
    cout<<data2.bookNO<<" "<<data2.units_sold<<" "<<data2.revenue<<endl;

    if(data1.bookNO == data2.bookNO){
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue  + data2.revenue;
        cout<< data1.bookNO <<" " << totalCnt <<" " << totalRevenue;

        return 0;
    }else{
        cerr<<"error123"<<endl;
        return -1;
    }

}