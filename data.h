#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>

class Data
{
  //friend Buy_product add(const Buy_product &, const Buy_product &);
  //friend std::istream &read(std::istream &, Buy_product &);
  //friend std::ostream &print(std::ostream &, const Buy_product &);
 public:
    Data() = default;
    Data(unsigned d, unsigned m, unsigned y) : dayData(d), monthData(m), yearData(y){};
    Data(std::istream &);

  private:
    unsigned dayData; // date of buy
    unsigned monthData;//month of buy
    unsigned yearData;//year of buy
};
  //Buy_product add(const Buy_product &, const Buy_product &);
  //std::istream &read(std::istream &, Buy_product &);
  //std::ostream &print(std::ostream &, const Buy_product &);

  /*Buy_product & Buy_product::combine(const Buy_product &rhs)
  {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;*/

  Data:: Data(std::istream &is)
  {
  //  read(is, *this);
  }
#endif