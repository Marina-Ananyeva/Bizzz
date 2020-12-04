#include <iostream>
#include <string>

#include "acc_product.h"
#include "indirect_costs.h"

double indirectCosts (double indirectCost1, double indirectCosts2)
{
  setlocale(LC_ALL, "RUS");

  std::cout << "\nВведите данные о накладных расходах \n(Наименование, сумма:\n";
  std::string nameOfIndirectCosts1;
  std::cin >> nameOfIndirectCosts1 >> indirectCost1;

  std::string nameOfIndirectCosts2;
  std::cin >> nameOfIndirectCosts2 >> indirectCosts2;

  double sumIndirectCosts = indirectCost1 + indirectCosts2;

  return sumIndirectCosts;

}
