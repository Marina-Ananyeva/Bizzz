#include <iostream>
#include <string>
#include <vector>

#include "buy_product.h"

std::istream &read(std::istream &is, Buy_product &prod)
{
  is >> prod.articleProduct >> prod.nameProduct >> prod.cntProduct >> prod.priceBuyProduct;
  prod.sumBuyProduct = prod.cntProduct * prod.priceBuyProduct;
  return is;
}

std::ostream &print(std::ostream &os, const Buy_product &prod)
{
  os << std::fixed << std::setprecision(2) << prod.articleProduct << " " << prod.nameProduct << " " << prod.cntProduct << " " << prod.priceBuyProduct 
  << " " << prod.sumBuyProduct << " " << prod.mid_price();
  return os;
}

std::ostream &print_sum(std::ostream &os, double sum)
{
  os << std::fixed << std::setprecision(2) << sum;
  return os;
}

Buy_product add(const Buy_product &lhs, const Buy_product &rhs)
{
  Buy_product sum = lhs;
  sum.combine(rhs);
  return sum;
}

/*double buyProduct(Product x) 
{
  std::vector<int> articleProduct;
  std::vector<std::string> nameProduct;
  std::vector<int> cntProduct;
  std::vector<double> costBuyProduct;
  double sumBuy = 0;
  
  setlocale(LC_ALL, "RUS"); 
  std::cout << "Введите данные о купленных товарах \n";

  while (std::cin)
  {
    std::cout << "Артикул товара: ";
    std::cin >> x.articleProduct;
    articleProduct.push_back(x.articleProduct);
    std::cin.ignore(32767, '\n');
    std::cout << "Наименование товара: ";
    getline(std::cin, x.nameProduct);
    nameProduct.push_back(x.nameProduct);
    std::cout << "Количество товара: ";
    std::cin >> x.cntProduct;
    cntProduct.push_back(x.cntProduct);
    std::cout << "Цена приобретения за ед. товара: ";
    std::cin >> x.costBuyProduct;
    costBuyProduct.push_back(x.costBuyProduct);

    sumBuy += (x.cntProduct * x.costBuyProduct);
    
    std::cout << "\n";
    std::cout << "Нажмите 1, чтобы продолжить ввод Купленных товаров, или любую клавишу, чтобы закончить\n";
    std::string ch;
    std::cin >> ch;
    if (ch [0] == '1')
      continue;
    if (ch [0]!= '1')
      break;
  }
  return sumBuy;

*/