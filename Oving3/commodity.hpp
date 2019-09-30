#pragma once

#include <string>
using namespace std;

class Commodity {
public:
    Commodity(const string &name_, int id_, double price_);

    const string &get_name() const { return name;}
    int get_id() const {return id;}
    double get_price(double numberOfCommodity=1);
    void set_price(double newPrice);
    double get_price_with_sales_tax(double numberOfCommodity);

private:
    string name;
    int id;
    double price;
};
