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
  
  double sumBuy = buyProduct(prod1);
  Product prod2;
  double sumIndirectCosts = indirectCosts(prod2);
  double totalCost = sumBuy + sumIndirectCosts;
  Product prod3;
  double sumSale = saleProduct(prod3);
  double income = sumSale - totalCost;
  double totalTax = tax(income);
  double netIncome = income - totalTax;

  std::cout << "\n" << std::endl;
  std::cout << "\t\t\tО Т Ч Е Т" << std::endl;
  std::string string1(66, '*');
  std::cout << string1 << std::endl;
  std::cout << "|| Расходы на покупку товара:\t" << std::fixed << std::setprecision(0) << "||\t" << (static_cast<int>(sumBuy) / 1000000) << " " <<
  ((static_cast<int>(sumBuy) / 1000) - (static_cast<int>(sumBuy) / 1000000) * 1000) << " " << (static_cast<int>(sumBuy) % 1000) << (static_cast<int>(sumBuy) % 1000) << (static_cast<int>(sumBuy) % 1000) << " руб. " << 
  ((static_cast<int>(sumBuy) * 100) % 100) << ((static_cast<int>(sumBuy) * 100) % 100) << " коп.\t" <<"||" << std::endl;

  std::cout << "|| Накладные расходы:\t\t" << std::fixed << std::setprecision(2) << "||\t" << sumIndirectCosts << " руб.\t\t" << "||" << std::endl;
  std::cout << string1 << std::endl;
  std::cout << "|| Итого РАСХОДЫ:\t\t" << std::fixed << std::setprecision(2) << "||\t" << totalCost << " руб.\t\t" << "||" << std::endl;
  std::cout << string1 << std::endl;
  std::cout << "|| ДОХОДЫ от реализации:\t" << std::fixed << std::setprecision(2) << "||\t" << sumSale << " руб.\t\t" << "||" << std::endl;
  std::cout << string1 << std::endl;
  std::cout << "|| ПРИБЫЛЬ:\t\t\t" << std::fixed << std::setprecision(2) << "||\t" << income << " руб.\t\t" << "||" << std::endl;
  std::cout << string1 << std::endl;
  std::cout << "|| Налоги к уплате:\t\t" << std::fixed << std::setprecision(2) << "||\t" << totalTax << " руб.\t\t" << "||" << std::endl;
  std::cout << string1 << std::endl;
  std::cout << "|| ЧИСТАЯ ПРИБЫЛЬ:\t\t" << std::fixed << std::setprecision(2) << "||\t" << netIncome << " руб.\t\t" << "||" << std::endl;
  std::cout << string1 << std::endl;
  std::cout << "\n\n\n" << std::endl;
  return 0;

}
