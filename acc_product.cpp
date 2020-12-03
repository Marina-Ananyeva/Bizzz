#include <iostream>
#include <string>
#include "acc_product.h"
#include "buy_product.cpp"
#include "sale_product.cpp"

int main () 
{
    setlocale(LC_ALL, "RUS");

    Product prod1, prod2, prod3, prod4;
    
    double sumBuy = buyProduct(prod1, prod2);
    std::cout << "\nРасходы на покупку товаров составили: " << sumBuy << " руб.\n";
    
    double sumSale = saleProduct(prod3, prod4);
    std::cout << "\nДоходы от реализации товаров составили: " << sumSale << " руб.\n";
    
    double revenue = sumSale - sumBuy;
    std::cout << "\nПрибыль составила: " << revenue << " руб.\v" << std::endl;

    return 0;

}
