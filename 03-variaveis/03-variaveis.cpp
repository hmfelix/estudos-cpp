#include <iostream>

int main() {
    
    char a = 70; // char pode ser um numero, vai ser o caractere correspondente da tabela ascii
    std::cout << a << std::endl;
    
    bool b = 35; // bool pode ser true = 1, false = 0
                 // qualquer coisa que digitemos diferente de 0 sera true
    std::cout << b << std::endl;

    std::cout << sizeof(bool) << std::endl; // mostra o tamanho escolhido pelo compilador
                                            // para aquele tipo de variaveis (em bytes)
    std::cout << sizeof(double) << std::endl;

    int c = 2;
    c = 5; // posso atribuir valor sem declarar tipo se ja tiver declarado antes
    std::cout << c << std::endl;

    int d; // posso tambem declarar sem atribuir e stribuir depois
    d = 10;
    std::cout << d << std::endl;

}
