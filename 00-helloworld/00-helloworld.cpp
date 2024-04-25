#include <iostream>

int main() {
    // << eh um operador (uma funcao) que passa o argumento seguinte para a funcao anterior (cout)
    std::cout << "Hello, World!" << std::endl; // o endl apenas insere uma quebra de linha no terminal, eh desnecessario
    std::cin.get(); // ah legal! isso aqui faz o prompt esperar o usuario apertar enter
                    // acho na vdd que capta o input de teclado do usuario ate ele apertar enter
                    // notar: com esse std::cin.get(), nao precisamos de return 0;
    // notar: esse programa funcionaria perfeitamente sem o endl e sem o cin.get
}
