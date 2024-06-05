#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Veiculo.hpp"
#include "Caminhao.hpp"
#include "Van.hpp"
#include <vector>
using namespace std;


int main(){

    vector<Caminhao*> caminhao;
    vector<Van*> van;
    caminhao.push_back(new Caminhao("fiat","tuctuc",12,1));
    caminhao.push_back(new Caminhao("nissan","rato",12,23));
    van.push_back(new Van("fiat","perua",12,123));
    van.push_back(new Van("byd","chines",33,333));
}