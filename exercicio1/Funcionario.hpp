#ifndef FUNCIONARIO
#define FUNCIONARIO
#include <string>
using std::string;

class Funcionario{
    private:
        string nome;
        int id;
        double salarioBase;
    public:
        Funcionario(string nome, int id, double salarioBase);
        virtual double calcularSalarioTotal();

};
#endif