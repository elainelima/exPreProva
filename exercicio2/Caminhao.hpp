#ifndef CAMINHAO
#define CAMINHAO
#include <string>
#include <iostream>
#include "Veiculo.hpp"
using std::cout;
using std::endl;
using std::string;

class Caminhao : public Veiculo{
    private:
        int eixos;
    public:
        Caminhao(const std::string& marca, const std::string& modelo, int capacidade, int eixos);
        void exibirDados() const override;
    };
#endif