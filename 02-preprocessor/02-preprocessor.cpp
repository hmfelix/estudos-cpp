/*
aqui vamos estudar 3 tipos de preprocessor statements:
#include
#define
#if

#include literalmente copia e cola o conteudo de uma header file .h
exatamente no local em que foi invocada
(pode ser arquivo fonte .cpp tb, mas nao eh recomendado)

#define literalmente substitui, em qualquer lugar em todo o codigo,
o primeiro argumento pelo segundo argumento

#if literalmente executa (se verdadeiro) ou ignora (se falso) tudo que esta entre
#if e #endif
*/

#include <iostream>

#if 1
#define LOL return
int multiplicar(int a, int b) {
    LOL a * b;
#include "chave-final.h"
#endif
// notar: tem uma chave final faltando na definicao da funcao,
//        mas ela eh copiada e colada da header file que incluimos
//        exatamente neste local

int main() {
    std::cout << multiplicar(2,3);
}
