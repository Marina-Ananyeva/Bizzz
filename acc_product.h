#ifndef ACC_PRODUCT_H
#define ACC_PRODUCT_H

#include <iostream>
#include <string>

struct Product 
{
  int articleProduct = 0;
  std::string nameProduct;
  int cntProduct = 0;
  double costBuyProduct = 0;
  double costSaleProduct = 0;
  std::string nameOfIndirectCosts;
  double indirectCosts;
};

#endif