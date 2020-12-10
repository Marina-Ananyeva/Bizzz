#include <iostream>
#include <string>
#include <vector>

#include "acc_product.h"
#include "indirect_costs.h"

double indirectCosts (Product y)
{
  std::vector<std::string> nameOfIndirectCosts;
  std::vector<int> indirectCosts;
  double sumIndirectCosts = 0;

  setlocale(LC_ALL, "RUS");
  std::cout << "\nВведите данные о накладных расходах:\n";

  while (std::cin)
  {
    std::cout << "Наименование: ";
    std::cin.ignore(32767, '\n');
    getline(std::cin, y.nameOfIndirectCosts);
    nameOfIndirectCosts.push_back(y.nameOfIndirectCosts);
    std::cout << "Сумма: ";
    std::cin >> y.indirectCosts;
    indirectCosts.push_back(y.indirectCosts);

    sumIndirectCosts += y.indirectCosts;
    
    std::cout << "\n";
    std::cout << "Нажмите 1, чтобы продолжить ввод Накладных расходов, или любую клавишу, чтобы закончить\n";
    std::string ch;
    std::cin >> ch;
    if (ch [0] == '1')
      continue;
    if (ch [0]!= '1')
      break;
  }

  return sumIndirectCosts;

}
