#include <iostream>
#include "dog.h"
#include "operation.h"
using namespace std;


int main() {
    Dog dog1("Bella");
    dog1.set_name("BJP");
    dog1.print_name();
    double something = add(4.5,9.6);
    std :: cout << something << std::endl;
    return 0;
}
