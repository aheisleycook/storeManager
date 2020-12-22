#include <iostream>
#include "string"
#include "iomanip"
class item{
public:
    int qty = 0;
    char i = 65;
    double price = 0.0.0;
    double  total = (price * qty) + tax;
private:
    const double tax = 1.30;

};



int main() {
    double total;
    item myshoes;
    myshoes.i = 'b1';
    myshoes.price = 2.23;
    myshoes.qty = 23;
    std::cout << std::setfill('-');
    std::cout << std::setprecision(3);
    std::cout << myshoes.i;
    std::cout << myshoes.total;
}
