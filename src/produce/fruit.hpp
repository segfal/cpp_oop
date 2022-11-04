#ifndef __FRUIT_HPP__
#define __FRUIT_HPP__

#include "../produce.hpp"

class Fruit : public Produce {
public:
    Fruit(std::string name);
    virtual ~Fruit();
};




#include "fruit.cpp"
#include "./fruit/apple.hpp"
#include "./fruit/orange.hpp"
#include "./fruit/avacado.hpp"




#endif