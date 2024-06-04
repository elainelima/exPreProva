#include "Van.hpp"

Van::Van(const std::string& marca, const std::string& modelo, int capacidade, int passageiros):Veiculo(marca, modelo, capacidade), passageiros(passageiros){}
void Van::exibirDados() const{
    std::cout << "Van - ";
    Veiculo::exibirDados();
    std::cout << "Passageiros: " << passageiros << "\n";
}
