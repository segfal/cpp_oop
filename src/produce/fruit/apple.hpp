#ifndef __APPLE_HPP__
#define __APPLE_HPP__



#include "../fruit.hpp"


class Apple : public Fruit {
    public:
        Apple();
        virtual ~Apple();
    private:  
        const std::string name = "Apple";
};


#include "apple.cpp"


#endif