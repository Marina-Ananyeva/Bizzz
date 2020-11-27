#ifndef BUY_PRODUCT_H
#define BUY_PRODUCT_H

#include <iostream>
#include <string>

#include "acc_product.h"

using namespace std;

double buyProduct (Product x, Product y) {
    setlocale (LC_ALL, "RUS"); 
    
    cout << "Введите данные о купленных товарах \n(Код товара, артикул товара, наименование товара," << 
    "количество товара, цена приобретения за ед. товара):\n";
    
    cin >> x.codProduct >> x.articleProduct >> x.nameProduct >> x.cntProduct >> x.costBuyProduct;
    cin >> y.codProduct >> y.articleProduct >> y.nameProduct >> y.cntProduct >> y.costBuyProduct;
    
    double sumBuy = x.cntProduct * x.costBuyProduct + y.cntProduct * y.costBuyProduct;
    

return sumBuy;
}

#endif