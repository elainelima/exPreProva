#include "Gerente.hpp"

Gerente::Gerente(string nome, int id, double salarioBase, double bonusAnual):Funcionario(nome, id, salarioBase){

}
double Gerente::calcularSalarioTotal(){
    return salarioBase + bonusAnual;
}