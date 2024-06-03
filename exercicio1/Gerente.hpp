#ifndef GERENTE
#define GERENTE
#include <string>
#include "Funcionario.hpp"
using std::string;

class Gerente: public Funcionario{
    private:
        double bonusAnual; 
    public:
        Gerente(string nome, int id, double salarioBase, double bonusAnual);
        double calcularSalarioTotal() override;

};
#endif