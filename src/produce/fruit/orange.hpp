#ifndef __ORANGE_HPP__
#define __ORANGE_HPP__



#include "../fruit.hpp"

class Orange : public Fruit {
    public:
        Orange();
        virtual ~Orange();
    private:  
        const std::string name = "Orange";
};




#include "orange.cpp"

#endif