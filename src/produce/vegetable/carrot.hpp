#ifndef __CARROT_HPP__
#define __CARROT_HPP__


#include "../vegetable.hpp"

class Carrot : public Vegetable {
    public:
        Carrot();
        virtual ~Carrot();
    
    private:
        const std::string name = "Carrot";
};



#include "carrot.cpp"

#endif

