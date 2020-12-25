#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

#include "acc_product.h"
#include "constants.h"
#include "buy_product.cpp"
#include "sale_product.cpp"
#include "indirect_costs.cpp"
#include "tax.cpp"

int main () 
{
  setlocale(LC_ALL, "RUS");

  Product prod1;
  double sumSale = saleProduct(prod1);
  Product prod2;
  double sumBuy = buyProduct(prod2);
  Product prod3;
  double sumIndirectCosts = indirectCosts(prod3);
  double totalCost = sumBuy + sumIndirectCosts;
  double income = sumSale - totalCost;
  double totalTax = tax(income);
  double netIncome = income - totalTax;

  std::cout << "\n" << std::endl;
  std::cout << "\t\t\tО Т Ч Е Т" << std::endl;
  std::cout << "\t\t\tза период" << std::endl;
  std::cout << "\t\tc 01.01.2020" << "\tпо 31.12.2020\n" << std::endl;
  std::string string1(66, '*');
  std::cout << string1 << std::endl;
  std::cout << "|| ВЫРУЧКА от реализации:\t" << std::fixed << std::setprecision(0) << "||\t" << (static_cast<int>(sumSale) / 1000000) << " " <<
  ((static_cast<int>(sumSale) / 1000) - (static_cast<int>(sumSale) / 1000000) * 1000) << " " << (static_cast<int>(sumSale) % 1000) << (static_cast<int>(sumSale) % 1000) << (static_cast<int>(sumSale) % 1000) << " руб. " << 
  ((static_cast<int>(sumSale) * 100) % 100) << ((static_cast<int>(sumSale) * 100) % 100) << " коп.\t" <<"||" << std::endl;
  std::cout << string1 << std::endl;
    
  std::cout << "|| Расходы на покупку товаров:\t" << std::fixed << std::setprecision(0) << "||\t" << (static_cast<int>(sumBuy) / 1000000) << " " <<
  ((static_cast<int>(sumBuy) / 1000) - (static_cast<int>(sumBuy) / 1000000) * 1000) << " " << (static_cast<int>(sumBuy) % 1000) << (static_cast<int>(sumBuy) % 1000) << (static_cast<int>(sumBuy) % 1000) << " руб. " << 
  ((static_cast<int>(sumBuy) * 100) % 100) << ((static_cast<int>(sumBuy) * 100) % 100) << " коп.\t" <<"||" << std::endl;
  std::cout << "|| Накладные расходы:\t\t" << std::fixed << std::setprecision(2) << "||\t" << sumIndirectCosts << " руб.\t\t" << "||" << std::endl;
 //std::cout << string1 << std::endl;
  std::string string2(66, '-');
  std::cout << "|| РАСХОДЫ итого:\t\t" << std::fixed << std::setprecision(0) << "||\t" << (static_cast<int>(totalCost) / 1000000) << " " <<
  ((static_cast<int>(totalCost) / 1000) - (static_cast<int>(totalCost) / 1000000) * 1000) << " " << (static_cast<int>(totalCost) % 1000) << " руб. " << 
  ((static_cast<int>(totalCost) * 100) % 100) << ((static_cast<int>(totalCost) * 100) % 100) << " коп.\t" << "||" << std::endl;
  std::cout << string1 << std::endl;

  std::cout << "|| ПРИБЫЛЬ:\t\t\t" << std::fixed << std::setprecision(0) << "||\t" << (static_cast<int>(income) / 1000000) << " " <<
  ((static_cast<int>(income) / 1000) - (static_cast<int>(income) / 1000000) * 1000) << " " << std::fixed << std::setprecision(2) << (static_cast<int>(income) % 1000)<< " руб.\t\t" << "||" << std::endl;
  std::cout << string1 << std::endl;
  std::cout << "|| НАЛОГИ к уплате:\t\t" << std::fixed << std::setprecision(2) << "||\t" << totalTax << " руб.\t\t" << "||" << std::endl;
  std::cout << string1 << std::endl;
  std::cout << "|| ЧИСТАЯ ПРИБЫЛЬ:\t\t" << std::fixed << std::setprecision(2) << "||\t" << netIncome << " руб.\t\t" << "||" << std::endl;
  std::cout << string1 << std::endl;
  std::cout << "|| Справочно:\n|| Складские остатки:\t\t" << "||\t" << "105 000,00" << " руб.\t\t"
            << "||" << std::endl;
  std::cout << string1 << std::endl;
  std::cout << "\n\n\n" << std::endl;
  return 0;

}
