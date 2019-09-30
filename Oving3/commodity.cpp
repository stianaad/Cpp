#include "commodity.hpp"
#include <iostream>
#include <string>

using namespace std;

const double moms = 1.25;

Commodity::Commodity(const string &name_, int id_, double price_) : name(name_), id(id_), price(price_){}

double Commodity::get_price(double numberOfCommodity){
    return price * numberOfCommodity;
}

void Commodity::set_price(double newPrice) {
    price = newPrice;
}

double Commodity::get_price_with_sales_tax(double numberOfCommodity) {
    return price*numberOfCommodity*moms;
}