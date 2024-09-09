#ifndef RECINTO_HPP
#define RECINTO_HPP

#include <iostream>
#include <string>


class Recinto{
    private:
        int id;
        std::string bioma;
        int Tam_total;
        int peso;

        std::string animal;
        int qtd;
    
        // criterio de canirvoro

        bool carnivoro;

        int espacolivre;


    public:
        //criterio de ambiente e espaço
        bool possivel;

        // para falar se tem espaço livre
        // bool espacoLivre;
        // criterio do macaco
        bool possibilidadeM;
        // se é possivel colocar outro animal com animal carnivoro 
        bool possivel2;
        // possibilidade para hipopotamo
        bool possibilidadeH;
        // possibilidade do espaco
        bool possibilidadeEspaco;

        Recinto(int id,std::string bioma,int tam,std::string animal,int qtd,bool carnivoro,int peso);

        std::string getBioma();

        void setPossivel();

        void setNaopossivel();

        void setEspacolivre(int valor);

        int getTotal();

        bool EhCarnivoro();
        
        int getQtd();

        std::string getAnimal();

        int getEspacoLivre();

        int getPeso();

        int getId();
};





#endif 