#include <iostream>

    /*
    tem 3 palavrinhas aqui que vamos ver:
    1) continue: pula direto para a proxima iteracao do loop
    2) break: sai do loop
    3) return: sai da funcao, nao interessa se esta dentro de loop ou nao
               (precisa retornar um valor se o tipo da funcao nao for void)
    */

void f() {
    std::cout << "printa 1" << std::endl;
    return;
    std::cout << "mas nao printa esse";
}

int main() {

    f();

    for (int i = 0; i < 15; i++) {
        
        if (i == 11) 
            break;

        if (i % 2 == 0)
            continue;
        std::cout << "Esta eh a " << i << "a iteracao" << std::endl;

    }

    for (int j = 0; j < 1000; j++) {
        std::cout << j << std::endl;
        if (j == 3)
            return 0; // simplesmente encerra o programa pq sai da funcao main
    }
    
    std::cout << "Esse codigo nao roda";

}
