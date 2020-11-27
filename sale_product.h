#ifndef SALE_PRODUCT_H
#define SALE_PRODUCT_H

#include <iostream>
#include <string>

#include "acc_product.h"

using namespace std;

double saleProduct (Product a, Product b) {
    setlocale (LC_ALL, "RUS");

    cout << "\nВведите данные о проданных товарах \n(Код товара, артикул товара, наименование товара," << 
    "количество товара, цена реализации за ед. товара):\n";

    cin >> a.codProduct >> a.articleProduct >> a.nameProduct >> a.cntProduct >> a.costSaleProduct;
    cin >> b.codProduct >> b.articleProduct >> b.nameProduct >> b.cntProduct >> b.costSaleProduct;

    double sumSale = a.cntProduct * a.costSaleProduct + b.cntProduct * b.costSaleProduct;

return sumSale;

}

#endif