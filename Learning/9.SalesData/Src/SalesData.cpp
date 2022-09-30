//
// Created by zhouwy on 2022/2/24.
//

#include "Inc/SalesData.h"

SalesData &SalesData::combine(const SalesData &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

double SalesData::avg_price() const {
    if(units_sold)
        return revenue/units_sold;
    else
        return 0;
}
SalesData add(const SalesData& lhs, const SalesData& rhs) {
    SalesData sum = lhs;
    sum.combine(rhs);
    return sum;
}
std::ostream &print(std::ostream& os, const SalesData& item) {
    os << item.isbn() << " " << item.units_sold << " "<< item.revenue << " "<< item.avg_price();
    return os;
}
std::istream &read(std::istream& is, SalesData& item) {
    double price = 0;
    is >> item.BookNo >>item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}