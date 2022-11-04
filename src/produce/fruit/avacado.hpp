#ifndef __AVACADO_HPP__
#define __AVACADO_HPP__


#include "../fruit.hpp"


class Avacado : public Fruit {
    public:
        Avacado();
        virtual ~Avacado();
    private:  
        const std::string name = "Avacado";
};

#include "avacado.cpp"


#endif