#include <iostream>

    /*
    tem 4 palavrinhas aqui que vamos ver:
    1) continue: pula direto para a proxima iteracao do loop
    2) break: sai do loop
    3) return: sai da funcao, nao interessa se esta dentro de loop ou nao
               (precisa retornar um valor se o tipo da funcao nao for void)
    4) exit(arg): termina o programa retornando o valor do argumento
                  0 indica geralmente sucesso
                  outros valores sao usados para tipos de erro especificos
    
    melhor usar return 0; na funcao main em vez de exit,
    pois ela desaloca todas as variaveis globais e locais,
    enquanto exit desaloca somente objetos globais e estaticos
    quando o programa termina, tudo eh desalocado, mas parece que return eh mais seguro

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

    // exit(0); essa linha mataria o programa aqui mesmo

    for (int j = 0; j < 1000; j++) {
        std::cout << j << std::endl;
        if (j == 3)
            return 0; // simplesmente encerra o programa pq sai da funcao main
    }
    
    std::cout << "Esse codigo nao roda";

}
