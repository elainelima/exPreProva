#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Veiculo.hpp"
#include "Caminhao.hpp"
#include "Van.hpp"
#include <vector>
using namespace std;


int main(){

    vector<Veiculo*> veiculo;
    veiculo.push_back(new Caminhao("fiat","tuctuc",12,1));
    veiculo.push_back(new Caminhao("nissan","rato",12,23));
    veiculo.push_back(new Van("fiat","perua",12,123));
    veiculo.push_back(new Van("byd","chines",33,333));
    veiculo.push_back(new Van("ford","aleatorio",4,23));
    veiculo.push_back(new Van("renaout","betoneira",776,23));
    veiculo.push_back(new Caminhao("volkswagen","b11",76,2));

    for(int i=0;i<veiculo.size();i++){
        veiculo[i]->exibirDados();
    }
}