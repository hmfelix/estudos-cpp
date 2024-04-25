/*
o objetivo aqui eh testar o uso de uma funcao auxiliar
definida em outro arquivo fonte (a função log), 
para entender melhor o funcionamento do linker e
aprender como construir um projeto com algum grau de modularização
*/

#include <iostream>

void Log(const char* message); // aqui tem apenas a declaracao da funcao, nao sua definicao
                               // (declaracao =/= definicao)

int main() {
    Log("Hello, World!"); // funcao definida no arquivo 01-linker-aux.cpp
    std::cin.get();
}

// notar: necessario solicitar ao compilador que compile ambos os arquivos
// o compilador sozinho nao eh capaz de encontrar e resolver as dependencias
// entre os arquivos
// isso pode ser feito automaticamente com CMake ou Make, mas ai jah eh
// algo mais avancado
