#ifndef VAN
#define VAN
#include <string>
#include <iostream>
#include "Veiculo.hpp"
using std::cout;
using std::endl;
using std::string;

class Van :public Veiculo{
    private:
        int passageiros;
    public:
        Van(const std::string& marca, const std::string& modelo, int capacidade, int passageiros):Veiculo(marca, modelo, capacidade), passageiros(passageiros){}
        void exibirDados() const override;
};
#endif