#ifndef ACC_PRODUCT_H
#define ACC_PRODUCT_H

#include <iostream>
#include <string>

using namespace std;

struct Product {
    int codProduct = 0;
    int articleProduct = 0;
    std::string nameProduct;
    double cntProduct = 0.00;
    double costBuyProduct = 0.00;
    double costSaleProduct = 0.00;

};

#endif