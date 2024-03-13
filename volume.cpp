#include <iostream>

int main() {
    double comprimento, largura, altura;

    std::cout << "Digite o comprimento da caixa: ";
    std::cin >> comprimento;

    std::cout << "Digite a largura da caixa: ";
    std::cin >> largura;

    std::cout << "Digite a altura da caixa: ";
    std::cin >> altura;

    double volume = comprimento * largura * altura;

    std::cout << "O volume da caixa e: " << volume << std::endl;

    return 0;
}
