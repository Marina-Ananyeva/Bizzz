#include <iostream>
#include <string>

#include "tax.h"
#include "constants.h"

double tax(double income)
{
  double dopRatePension = 0.0;
  double totalTax = 0.0;

  if (income > constants::dopSumPension)
  {
    double dopRatePension = (income - constants::dopSumPension) * constants::dopRatePension;
  }
  
  totalTax = constants::taxRatePension + constants::taxRateSocial + dopRatePension + 
  (income - constants::taxRatePension - constants::taxRateSocial - dopRatePension) * constants::taxRateEnvdR;

  return totalTax;

}
