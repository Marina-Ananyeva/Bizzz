#ifndef SALE_PRODUCT_H
#define SALE_PRODUCT_H

#include <iostream>
#include <string>

#include "acc_product.h"

struct Sale_product 
{
  
  int articleProduct = 0;
  std::string nameProduct;
  int cntProduct = 0;
  double costBuyProduct = 0;
  double costSaleProduct = 0;
  std::string nameOfIndirectCosts;
  double indirectCosts;
};

double saleProduct(Product);

#endif