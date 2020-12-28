#ifndef BUY_PRODUCT_H
#define BUY_PRODUCT_H

#include <iostream>
#include <string>

class Buy_product 
{
  //friend Buy_product add(const Buy_product &, const Buy_product &);
  //friend std::istream &read(std::istream &, Buy_product &);
  //friend std::ostream &print(std::ostream &, const Buy_product &);

  public:
    Buy_product() = default;
    Buy_product(unsigned d, unsigned m, unsigned y) : dayData(d), monthData(m), yearData(y){};
    Buy_product(int a, std::string &s, unsigned b, double c) : 
  articleProduct(a), nameProduct(s), cntProduct(b), priceBuyProduct(c){};
    Buy_product(std::istream &);
    int get_articleProduct() const { return articleProduct; }
    std::string get_nameProduct() const { return nameProduct; }

  private:
    unsigned dayData; // date of buy
    unsigned monthData;//month of buy
    unsigned yearData;//year of buy

    int articleProduct = 0;//article of buy product
    std::string nameProduct;//name of buy product
    unsigned cntProduct = 0;//count of buy product
    double priceBuyProduct = 0;//price of buy product
    //double sumBuyProduct = 0;//sum of buy product
};
  //Buy_product add(const Buy_product &, const Buy_product &);
  //std::istream &read(std::istream &, Buy_product &);
  //std::ostream &print(std::ostream &, const Buy_product &);

  /*Buy_product & Buy_product::combine(const Buy_product &rhs)
  {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;*/

  Buy_product:: Buy_product(std::istream &is)
  {
  //  read(is, *this);
  }
#endif