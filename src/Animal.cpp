#include "Animal.hpp"


Animal::Animal(std::string animal,std::string bioma,int peso,bool carnivoro){
    this->animal = animal;
    this->bioma = bioma;
    this->peso = peso;

    this->carnivoro = carnivoro;
}

std::string Animal::getName(){
    return animal;
}

std::string Animal::getBioma(){
    return bioma;
}

int Animal::getPeso(){
    return peso;
}

bool Animal::EhCarnivoro(){
    return carnivoro;
}

