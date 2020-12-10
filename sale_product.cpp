#include <iostream>
#include <string>
#include <vector>

#include "acc_product.h"
#include "sale_product.h"

double saleProduct(Product z) 
{
  std::vector<int> articleProduct;
  std::vector<std::string> nameProduct;
  std::vector<int> cntProduct;
  std::vector<double> costSaleProduct;
  double sumSale = 0;
  
  setlocale(LC_ALL, "RUS"); 
  std::cout << "Введите данные о проданных товарах \n";

  while (std::cin)
  {
    std::cout << "Артикул товара: ";
    std::cin >> z.articleProduct;
    articleProduct.push_back(z.articleProduct);
    std::cin.ignore(32767, '\n');
    std::cout << "Наименование товара: ";
    getline(std::cin, z.nameProduct);
    nameProduct.push_back(z.nameProduct);
    std::cout << "Количество товара: ";
    std::cin >> z.cntProduct;
    cntProduct.push_back(z.cntProduct);
    std::cout << "Цена реализации за ед. товара: ";
    std::cin >> z.costSaleProduct;
    costSaleProduct.push_back(z.costSaleProduct);

    sumSale += (z.cntProduct * z.costSaleProduct);
    
    std::cout << "\n";
    std::cout << "Нажмите 1, чтобы продолжить ввод Проданных товаров, или любую клавишу, чтобы закончить\n";
    std::string ch;
    std::cin >> ch;
    if (ch [0] == '1')
      continue;
    if (ch [0]!= '1')
      break;
  }
  return sumSale;
}
