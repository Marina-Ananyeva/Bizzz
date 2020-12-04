#include <iostream>
#include <string>

#include "acc_product.h"
#include "sale_product.h"

double saleProduct(Product a, Product b) 
{
  setlocale(LC_ALL, "RUS");

  std::cout << "\nВведите данные о проданных товарах \n(Артикул товара, наименование товара," << 
  "количество товара, цена реализации за ед. товара):\n";

  std::cin >> a.articleProduct >> a.nameProduct >> a.cntProduct >> a.costSaleProduct;
  std::cin >> b.articleProduct >> b.nameProduct >> b.cntProduct >> b.costSaleProduct;

  double sumSale = a.cntProduct * a.costSaleProduct + b.cntProduct * b.costSaleProduct;

  return sumSale;

}
