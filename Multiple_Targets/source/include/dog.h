#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

class Dog{
    std::string name;
    public:
    Dog(std :: string name);
    Dog() = default;
    ~Dog();

    void print_name(){
        std :: cout << this->name << std::endl;
    }

    void set_name(std::string name){
        this->name = name;
    }
};

#endif