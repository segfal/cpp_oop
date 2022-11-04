#include "produce.hpp"


Produce::Produce(std::string name, std::string type)
{
    if(name == "" || type == "")
    {
        std::cout << "Error: Produce name and type cannot be empty" << std::endl;
        exit(1);
    }
    this->name = name;
    this->type = type;
}


std::string Produce::getName()
{
    return this->name;
}

std::string Produce::getType()
{
    return this->type;
}


bool Produce::isFruit() {
    return _isFruit;
}


bool Produce::isVegetable() {
    return _isVegetable;
}