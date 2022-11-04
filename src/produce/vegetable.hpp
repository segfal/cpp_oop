#ifndef __VEGETABLE_HPP__
#define __VEGETABLE_HPP__

#include "../produce.hpp"

class Vegetable : public Produce {
    public:
        Vegetable(std::string name);
        virtual ~Vegetable();
    
};

#include "vegetable.cpp"
#include "./vegetable/spinach.hpp"
#include "./vegetable/carrot.hpp"
#include "./vegetable/potato.hpp"



#endif