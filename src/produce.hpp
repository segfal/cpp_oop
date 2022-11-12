#ifndef __PRODUCE_HPP__
#define __PRODUCE_HPP__
#include <string>
#include <vector>
#include <map>
#include <iostream>

class Produce
{
    private:
        std::string name;
        std::string type;
        const bool _isFruit = type == "fruit";
        const bool _isVegetable = type == "vegetable";
    public:
        Produce(std::string name = "", std::string type = "");
        std::string getName();
        std::string getType();
        bool isFruit();
        bool isVegetable();

};



#include "produce.cpp"
#include "./produce/fruit.hpp"
#include "./produce/vegetable.hpp"



#endif