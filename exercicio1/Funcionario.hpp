#ifndef FUNCIONARIO
#define FUNCIONARIO
#include <string>
using std::string;

class Funcionario{
    protected:
        string nome;
        int id;
        double salarioBase;
    public:
        Funcionario(string nome, int id, double salarioBase);
        virtual double calcularSalarioTotal();

};
#endif