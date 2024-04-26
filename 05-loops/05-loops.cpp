#include <iostream>

int main() {

    /* o que um loop for faz em C++ eh o seguinte:
    aceita 3 argumentos
    1º, cria uma variavel declarada no 1º argumento, antes de qualquer iteracao
    2º, em todas as iteracoes, testa uma condicao para ver se itera mais uma vez ou nao
    3°, executa o codigo do 3º argumento apos o final da iteracao atual
    */

    for (int i = 0; i < 0; i++) {
        std::cout << "Nao eh para esse codigo rodar"; // veja: o loop testa o 2º argumento em 
                                                      // TODAS as iteracoes, inclusive a 1ª
    }

    // notar: sao opcionais o 1º e 3º argumento!
    int j = 0;
    for ( ; j == 0; ) {
        std::cout << std::endl << "Esse sim!" << std::endl;
        j++;
    }

    // notar: na forma acima, o loop for eh identico a um while!
    // se a condicao do for eh verdadeira sempre, ele continua rodando ate o infinito

    // do while itera o codigo dentro de do primeiro, antes de avaliar a condicao
    // entao ele sempre roda pelo menos uma vez
    int k = 0;
    do {
        std::cout << "Bora" << std::endl;
    } while (k < 0); // notar: nao tem codigo aqui depois, a interacao eh soh o que esta no do
    

}
