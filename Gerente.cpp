#include "Gerente.hpp"

Gerente::Gerente(string nome, int id, double salarioBase):Funcionario(nome, id, salarioBase){

}
double CalcularSalarioTotal(double salarioBase, double bonusANual){
    return salarioBase + bonusANual;
}