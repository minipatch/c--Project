#include "recinto.hpp"


Recinto::Recinto(int id,std::string bioma,int tam,std::string animal,int qtd,bool carnivoro,int peso){
    this->id = id;
    this->bioma = bioma;
    this->Tam_total = tam;
    this->animal = animal;
    this->carnivoro = carnivoro;
    this->peso = peso;


    if(animal !="vazio"){
        this->qtd = qtd;
    }
    else if(animal == "vazio"){
        this->qtd = 0;
    }
}

std::string Recinto::getBioma(){
    return bioma;
}

void Recinto::setPossivel(){
    possivel = true;
}

void Recinto::setNaopossivel(){
    possivel = false;
}

int Recinto::getTotal(){
    return Tam_total;
}

bool Recinto::EhCarnivoro(){
    return carnivoro;
}

std::string Recinto::getAnimal(){
    return animal;
}

int Recinto::getQtd(){
    return qtd;
}

int Recinto::getEspacoLivre(){
    return espacolivre;
}

void Recinto::setEspacolivre(int valor){
    espacolivre = valor;
}

int Recinto::getPeso(){
    return peso;
}

int Recinto::getId(){
    return id;
}