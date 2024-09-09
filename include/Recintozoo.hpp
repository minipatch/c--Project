#ifndef RECINTOZOO_HPP
#define RECINTOZOO_HPP

#include "recinto.hpp"
#include "Animal.hpp"
#include <sstream>
#include <vector>

class Recintozoo{
    private:

        std::vector<Animal> tabela;
        std::vector<Recinto> tabelaRecinto;

    public:
        Recintozoo(std::vector<Animal> &tabela,std::vector<Recinto> &TabelaRecinto);

        void analiseRecinto(std::string animal,int quantidade);

        std::vector<std::string> dividirBiomas(const std::string& biomaComposto);
};



#endif