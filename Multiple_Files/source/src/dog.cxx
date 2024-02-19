#include "dog.h"
#include <iostream>

Dog :: Dog(std :: string name){
    std::cout << "Constructor called for Dog : " << name << std::endl;
}

Dog :: ~Dog(){
    std::cout << "Destructor called for Dog"<< std::endl;
}