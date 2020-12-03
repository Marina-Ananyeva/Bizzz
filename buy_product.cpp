#include <iostream>
#include <string>

#include "acc_product.h"
#include "buy_product.h"

double buyProduct(Product x, Product y) 
{
    setlocale(LC_ALL, "RUS"); 
    
    std::cout << "Введите данные о купленных товарах \n(Код товара, артикул товара, наименование товара," << 
    "количество товара, цена приобретения за ед. товара):\n";
    
    std::cin >> x.codProduct >> x.articleProduct >> x.nameProduct >> x.cntProduct >> x.costBuyProduct;
    std::cin >> y.codProduct >> y.articleProduct >> y.nameProduct >> y.cntProduct >> y.costBuyProduct;
    
    double sumBuy = x.cntProduct * x.costBuyProduct + y.cntProduct * y.costBuyProduct;
    
    return sumBuy;
}