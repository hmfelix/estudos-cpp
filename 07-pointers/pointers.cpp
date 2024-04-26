#include <iostream>

int main() {

    // pointer eh sempre um inteiro que representa um endereco de memoria

    void* p = 0; // pointer inutil, pois nao existe endereco 0 de memoria
    std::cout << p << std::endl; // de novo: eh somente um inteiro

    // o operador & eh usado para obter o endereco de memoria de uma variavel:
    // (operador de referencia)
    std::cout << &p << std::endl; // no caso, obtemos o endereco do pointer

    // fazendo um pointer apontar para uma variavel
    // (i.e., estocar o endereco de memoria daquela variavel):
    char a = 'a'; // notar: em C/C++, '' eh para caractere, "" eh para string!
    void* p_a = &a; 
    std::cout << "O endereco de memoria da variavel " << a << " eh " << p_a << std:: endl;
    std::cout << &a << std::endl;
    // no caso anterior, eu precisei usar void*, pois se eu usar char*, ou se imprimir
    // direto em cout &a (que eh equivalente, ao usar void* estamos fazendo um casting implicito,
    // uma especie de coercao), a funcao std::cout tem um comportamento especial para char*
    // interpretando que queremos que ela imprima o texto ali estocado
    
    // o mesmo nao acontece se usarmos um int:
    int n = 1;
    int* p_n = &n; 
    std::cout << "O endereco de memoria da variavel " << n << " eh " << p_n << std:: endl;
    // lembrar: toda e qualquer variavel eh so um numero inteiro na memoria
    // notar: se definimos o ponteiro como void*, estamos omitindo do compilador
    //        o tipo de variavel representado por aquele inteiro,
    //        mas se definimos como char*, estamos dizendo ao compilador para
    //        interpretar a variavel sempre como char
    //        void eh um tipo especial que representa a ausencia de tipo
    // porem void* eh meio ruim pq zoa a aritmetica de ponteiros, que depende do tipo de ponteiro

    // sem definir uma variavel, o seu valor sera apenas o que quer que esteja no endereco
    // de memoria a ela atribuido pelo compilador no momento em que foi declarada:
    int x;
    std::cout << x << std::endl;
    std::cout << &x << std::endl;
    int y;
    std::cout << y << std::endl;
    std::cout << &y << std::endl;
    // por isso definir (ou "inicializar") variaveis eh via de regra a melhor pratica

    // ponteiros em arrays:
    // uma array tem varios enderecos de memoria
    char str[] = "Hello, World!";
    void* p_str = &str[0];
    // de novo temos de usar void pq ha um comportamento especial na impressao de char*
    std::cout << p_str << std::endl;
    // ou poderiamos fazer o seguinte: (exemplo sem o operador de referencia)
    void* p_str2 = str;
    std::cout << p_str2 << std::endl;
    // eh equivalente
    // por que isso funciona?
    // porque o nome de uma array jah eh, em si, um ponteiro para seu primeiro elemento
    // lembrar: o nome da array nao eh um valor em si. os valores sao estocados dentro da array
    // notar: as coisas funcionam de outro jeito com vetores da biblioteca std::vector

    // outro exemplo sem o uso do operador de referencia:
    // se ja temos um ponteiro e queremos que outro ponteiro se refira à mesma variavel:
    int* q = p_n;
    std::cout << q << " comparar com " << p_n << std::endl;

    // a situacao acima eh diferente de um pointer duplo:
    int** r = &p_n;
    std::cout << r << " eh o endereco de memoria do pointer p_n, cujo valor eh " << p_n << std::endl;

    // estudando brevemente o tamanho ocupado por um pointer (estimo 5 bytes):
    std::cout << "tamanho de um pointer: " << sizeof(r) << " bytes" << std::endl;
    // errado! 8 bytes. arquitetura 64 bits tem endereco de memoria de 8 bytes por padrao,
    // mesmo que o hexadecimal no meu sistema va ate 10 dígitos (5 bytes)

}
