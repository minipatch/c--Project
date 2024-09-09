#include "Recintozoo.hpp"


Recintozoo::Recintozoo(std::vector<Animal> &tabela,std::vector<Recinto> &TabelaRecinto){
    this->tabela = tabela;
    this->tabelaRecinto = TabelaRecinto;
}

void Recintozoo::analiseRecinto(std::string animal,int quantidade){
    if(quantidade<=0 || typeid(quantidade) != typeid(int)){
        std::cout<<"quantidade invalida"<<std::endl;
        return;
    }
    
    bool valindando;
    std::string biome;
    int peso;
    bool carnivoro;

    for(int i=0;i<tabela.size();i++){
        if(animal != tabela[i].getName()){
            valindando = false;
        }
        else{
            peso =  tabela[i].getPeso();
            biome = tabela[i].getBioma();
            carnivoro = tabela[i].EhCarnivoro();
            valindando = true;
            break;
        }
    }

    int espacoOcup = (peso*quantidade);  

    if(valindando == false){
        std::cout<<"nome invalido"<<std::endl;
        return;
    }

    std::cout<<"condicao dos biomas"<<std::endl;
    for(int i=0; i<tabelaRecinto.size() ;i++){
        if(biome.find(tabelaRecinto[i].getBioma())  != std::string::npos   && tabelaRecinto[i].getTotal()>= espacoOcup){
            tabelaRecinto[i].setPossivel();
            std::cout<<"e possivel1"<<std::endl;
        }
        else if(tabelaRecinto[i].getBioma().find("savana e rio")  != std::string::npos && tabelaRecinto[i].getTotal()>=espacoOcup && animal == "macaco"){
            tabelaRecinto[i].setPossivel();
            std::cout<<"e possivel2"<<std::endl;
        }
        else if(tabelaRecinto[i].getBioma().find("savana e rio") != std::string::npos && tabelaRecinto[i].getTotal()>= espacoOcup && animal == "hipopotamo")
        {
            tabelaRecinto[i].setPossivel();
            std::cout<<"e possivel3"<<std::endl;
        }
        else{
            tabelaRecinto[i].setNaopossivel();
            std::cout<<"nao e possivel"<<std::endl;
        }
    }

    std::cout<<"condicao canivora"<<std::endl;
    std::cout<<carnivoro<<std::endl;
    for(int i=0;i<tabelaRecinto.size();i++){
        if(carnivoro == false && tabelaRecinto[i].EhCarnivoro() == false){
            tabelaRecinto[i].possivel2 = true;
            std::cout<<"e possivel"<<std::endl;
        }
        else if(animal =="leopardo" || animal == "leao" && tabelaRecinto[i].getAnimal() == "leao"){
            tabelaRecinto[i].possivel2 = true;
            std::cout<<"e possivel"<<std::endl;
        }
        else if(carnivoro == true && tabelaRecinto[i].getAnimal() == "vazio")
        {
            std::cout<<"e possivel"<<std::endl;
            tabelaRecinto[i].possivel2 = true;
        }
        else{
            std::cout<<"nao possivel"<<std::endl;
            tabelaRecinto[i].possivel2 = false;
        }
    }

    std::cout<<"condicao hipopotamo"<<std::endl;
    
    if(animal == "hipopotamo")
    {
        for(int i=0;i<tabelaRecinto.size();i++){
            if(tabelaRecinto[i].getBioma().find("savana e rio") != std::string::npos && tabelaRecinto[i].getAnimal() != "vazio"){
                tabelaRecinto[i].possibilidadeH = true; 
                std::cout<<"e possivel"<<std::endl;
            }
            else if(tabelaRecinto[i].getAnimal() == "vazio"){
                tabelaRecinto[i].possibilidadeH = true;
                std::cout<<"e possivel"<<std::endl;
            }
            else{
                tabelaRecinto[i].possibilidadeH = false;
                std::cout<<"nao e possivel"<<std::endl;
            }
        }
    }
    else{
        for(int i=0;i<tabelaRecinto.size();i++){
            tabelaRecinto[i].possibilidadeH = true;
        }
    }

    std::cout<<"posibilidade do macaco"<<std::endl;

    if(animal == "macaco" && quantidade == 1){
        for(int i=0;i<tabelaRecinto.size();i++){
            if(tabelaRecinto[i].getAnimal() == "vazio"){
                tabelaRecinto[i].possibilidadeH = false;
            }
            else{
                tabelaRecinto[i].possibilidadeM = true;
            }
        }
    }



    std::cout<<"verificando se ha outro animal para adicionar +1"<<std::endl;
    int espacolivre;


    for(int i=0;i<tabelaRecinto.size();i++){
        if(tabelaRecinto[i].getAnimal() == "vazio" || animal == tabelaRecinto[i].getAnimal()){
            espacolivre = tabelaRecinto[i].getTotal() - espacoOcup - (tabelaRecinto[i].getQtd()*tabelaRecinto[i].getPeso());
            std::cout<<espacolivre<<std::endl;
        }
        else{
            espacolivre = tabelaRecinto[i].getTotal() - (espacoOcup+1) - (tabelaRecinto[i].getQtd()*tabelaRecinto[i].getPeso());
            std::cout<<"2:"<<espacolivre<<std::endl;
        }
        tabelaRecinto[i].setEspacolivre(espacolivre);
        espacolivre = 0;
    }

    for(int i=0;i<tabelaRecinto.size();i++){
        if(quantidade <= tabelaRecinto[i].getTotal()- (tabelaRecinto[i].getQtd()*tabelaRecinto[i].getPeso())){
            tabelaRecinto[i].possibilidadeEspaco = true;
        }
        else{
            tabelaRecinto[i].possibilidadeEspaco = false;
        }
    }

    bool recinto = false;

    std::cout<<"possiveis recintos"<<std::endl;
    for(int i=0;i<tabelaRecinto.size();i++){
        if(tabelaRecinto[i].possibilidadeEspaco == true && tabelaRecinto[i].possivel == true && tabelaRecinto[i].possivel2 == true && tabelaRecinto[i].possibilidadeH == true &&tabelaRecinto[i].possibilidadeEspaco == true){
            std::cout<<"Recinto: "<<tabelaRecinto[i].getId()<<"espaco livre:"<<tabelaRecinto[i].getEspacoLivre()<<"total: "<<tabelaRecinto[i].getTotal()<<std::endl;
            recinto = true;
        }
    }


    if(recinto == false){
        std::cout<<"nao ha recinto viavel"<<std::endl;
    }






    









    
    



}

