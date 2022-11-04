#ifndef __SPINACH_HPP__
#define __SPINACH_HPP__
#include "../vegetable.hpp"



class Spinach : public Vegetable {
    public:
        Spinach();
        virtual ~Spinach();
    private:
        const std::string name = "Spinach";


    
};


#include "spinach.cpp"

#endif