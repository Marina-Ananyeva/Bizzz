#ifndef BUY_PRODUCT_H
#define BUY_PRODUCT_H

#include <iostream>
#include <string>

class Buy_product
{
  friend std::istream &read(std::istream &, Buy_product &);
  friend std::ostream &print(std::ostream &, const Buy_product &);
  friend std::ostream &print_sum(std::ostream &, double);
  friend Buy_product add(const Buy_product &, const Buy_product &);
  friend double sumBuy(double sum, Buy_product &);


  public:
    Buy_product() = default;
    Buy_product(int a, std::string &s, unsigned b, double c, double d) : 
  articleProduct(a), nameProduct(s), cntProduct(b), priceBuyProduct(c), sumBuyProduct(b * c) {};
    Buy_product(std::istream &);
    int get_articleProduct() const { return articleProduct; }
    std::string get_nameProduct() const { return nameProduct; }
    Buy_product &combine(const Buy_product &);
    double sumBuy(double, Buy_product &);

  private:
    int articleProduct = 0;//article of buy product
    std::string nameProduct;//name of buy product
    unsigned cntProduct = 0;//count of buy product
    double priceBuyProduct = 0;//price of buy product
    double sumBuyProduct = 0;//sum of buy product
    double mid_price() const;
};

std::istream &read(std::istream &, Buy_product &);
std::ostream &print(std::ostream &, const Buy_product &);
std::ostream &print_sum(std::ostream &, double);
Buy_product add(const Buy_product &, const Buy_product &);

Buy_product & Buy_product::combine(const Buy_product &rhs)
{
  cntProduct += rhs.cntProduct;
  sumBuyProduct += rhs.sumBuyProduct;
  return *this;
}

Buy_product::Buy_product(std::istream &is)
{
  read(is, *this);
}

double Buy_product::mid_price() const
{
  return sumBuyProduct / cntProduct;
}

double sumBuy(double sum, Buy_product &x) 
{ 
  return sum + x.sumBuyProduct;
};
#endif