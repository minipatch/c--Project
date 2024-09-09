#include "recinto.hpp"
#include "Animal.hpp"
#include "Recintozoo.hpp"
#include <vector>


int main(){
    Recinto r1(1,"savana",10,"macaco",3,false,1);
    Recinto r2(2,"floresta",5,"vazio",0,false,1);
    Recinto r3(3,"savana e rio",7,"gazela",1,false,2);
    Recinto r4(4,"rio",8,"vazio",0,false,1);
    Recinto r5(5,"savana",9,"leao",1,true,3);

    Animal a1("leao","savana",3,true);
    Animal a2("leopardo","savana",2,true);
    Animal a3("crocodilo","rio",3,true);
    Animal a4("macaco","savana ou floresta",1,false);
    Animal a5("gazela","savana",2,false);
    Animal a6("hipopotamo","savana ou rio",4,false);


    std::vector<Animal> tabela;
    std::vector<Recinto> TabelaRecinto;

    TabelaRecinto.push_back(r1);
    TabelaRecinto.push_back(r2);
    TabelaRecinto.push_back(r3);
    TabelaRecinto.push_back(r4);
    TabelaRecinto.push_back(r5);

    std::cout<<"lindo"<<std::endl;


    tabela.push_back(a1);
    tabela.push_back(a2);
    tabela.push_back(a3);
    tabela.push_back(a4);
    tabela.push_back(a5);
    tabela.push_back(a6);
    
   Recintozoo analise(tabela,TabelaRecinto);

   analise.analiseRecinto("crocodilo",1); 


}