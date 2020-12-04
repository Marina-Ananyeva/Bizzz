#include <iostream>
#include <string>
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

  Product prod1, prod2, prod3, prod4;

  double sumBuy = buyProduct(prod1, prod2);
  double indirectCost1, indirectCost2;
  double sumIndirectCosts = indirectCosts(indirectCost1, indirectCost2);
  double totalCost = sumBuy + sumIndirectCosts;
  double sumSale = saleProduct(prod3, prod4);
  double income = sumSale - totalCost;
  double totalTax = tax(income);
  double netIncome = income - totalTax;

  std::cout << "\n\n\n" << std::endl;
  std::cout << "Расходы на покупку:\t\t" << std::fixed << std::setprecision(2) << sumBuy << " руб.\v" << std::endl;

  std::cout << "Накладные расходы:\t\t" << std::fixed << std::setprecision(2) << sumIndirectCosts << " руб.\v" << std::endl;

  std::cout << "ИТОГО РАСХОДЫ:\t\t\t" << std::fixed << std::setprecision(2) << totalCost << " руб.\v" << std::endl;

  std::cout << "ДОХОДЫ от реализации:\t\t" << std::fixed << std::setprecision(2) << sumSale << " руб.\v" << std::endl;

  std::cout << "ПРИБЫЛЬ:\t\t\t" << std::fixed << std::setprecision(2) << income << " руб.\v" << std::endl;

  std::cout << "Налоги к уплате:\t\t" << std::fixed << std::setprecision(2) << totalTax << " руб.\v" << std::endl;

  std::cout << "ЧИСТАЯ ПРИБЫЛЬ:\t\t\t" << std::fixed << std::setprecision(2) << netIncome << " руб.\v" << std::endl;

  return 0;

}
