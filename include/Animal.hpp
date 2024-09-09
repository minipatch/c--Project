#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal{
    private:
        std::string animal;
        std::string bioma;
        int peso;
        bool carnivoro;

    public:
        Animal(std::string animal,std::string bioma,int peso,bool carnivoro);

        std::string getName();

        std::string getBioma();

        int getPeso();

        bool EhCarnivoro();
};






#endif