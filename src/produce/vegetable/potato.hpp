#ifndef __POTATO_HPP__
#define __POTATO_HPP__

#include "../vegetable.hpp"

class Potato : public Vegetable {
    public:
        Potato();
        virtual ~Potato();
    private:
        const std::string name = "Potato";
    
};



#include "potato.cpp"

#endif