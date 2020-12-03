#include <iostream>
#include <string>
#include "acc_product.h"
#include "buy_product.cpp"
#include "sale_product.cpp"

using namespace std;


int main () {
    setlocale (LC_ALL, "RUS");

    Product prod1, prod2, prod3, prod4;
    //buyProduct (prod1, prod2);//

    double sumBuy = buyProduct (prod1, prod2);
    cout << "\nРасходы на покупку товаров составили: " << sumBuy << " руб.\n";
    
    double sumSale = saleProduct (prod3, prod4);
    cout << "\nДоходы от реализации товаров составили: " << sumSale << " руб.\n";
    
    double revenue = sumSale - sumBuy;
    cout << "\nПрибыль составила: " << revenue << " руб.\v" << endl;

return 0;

}
