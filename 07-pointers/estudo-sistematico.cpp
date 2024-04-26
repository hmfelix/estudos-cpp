/*
vou fazer um estudo mais sistematico sobre como o compilador aloca memoria
vou criar varias variaveis e pegar o endereco de memoria delas
depois vou transformar esse endereco de memoria de hexadecimal para inteiros
e vou estudar isso
*/

#include <iostream> 
#include <map>

int main() {

    // primeiro vamos ver como tornar o codigo mais eficiente
    // se eu aloco um numero para bool, tem diferenca de tamanho
    // para se eu aloco true?
    bool x = true;
    std::cout << sizeof(x) <<std::endl;
    bool y = 1;
    std::cout << sizeof(y) <<std::endl;
    bool z = 1000;
    std::cout << sizeof(z) <<std::endl;
    // resposta: nao!! bool sempre tem tamanho 1,
    // parece que o proprio compilador jah decide qual vai ser o valor (?)

    // agora vamos ver se eu posso declarar varias variaveis com mesmo nome
    int b = 2;
    // int b = 3; nao, se eu fizer isso da um erro

    // entao eu vou ter que dar nomes diferentes às variaveis
    // mas ao que parece eu nao posso usar uma string para dar um nome a uma variavel
    // entao vou ter q fazer na mao mesmo:
    bool q= 1;
    std::cout << &q << std::endl;
    bool w= 1;
    std::cout << &w << std::endl;
    bool e= 1;
    std::cout << &e << std::endl;
    bool r= 1;
    std::cout << &r << std::endl;
    bool t= 1;
    std::cout << &t << std::endl;
    bool u= 1;
    std::cout << &u << std::endl;
    bool i= 1;
    std::cout << &i << std::endl;
    bool o= 1;
    std::cout << &o << std::endl;
    bool p= 1;
    std::cout << &p << std::endl;
    bool a= 1;
    std::cout << &a << std::endl;
    bool s= 1;
    std::cout << &s << std::endl;
    bool d= 1;
    std::cout << &d << std::endl;
    bool f= 1;
    std::cout << &f << std::endl;
    bool g= 1;
    std::cout << &g << std::endl;
    bool h= 1;
    std::cout << &h << std::endl;
    bool j= 1;
    std::cout << &j << std::endl;
    bool k= 1;
    std::cout << &k << std::endl;
    bool l= 1;
    std::cout << &l << std::endl;
    bool c= 1;
    std::cout << &q << std::endl;
    bool v= 1;
    std::cout << &v << std::endl;
    bool n= 1;
    std::cout << &n << std::endl;
    bool m= 1;
    std::cout << &m << std::endl;
    bool A= 1;
    std::cout << &A << std::endl;
    bool B= 1;
    std::cout << &B << std::endl;
    bool C= 1;
    std::cout << &C << std::endl;
    
    // conclusao: toda vez que EXECUTAMOS o (mesmo) programa, ele aloca endereços diferentes
    // de memoria, ou seja, a memoria nao eh alocada propriamente pelo compilador, este apenas
    // oferece instrucoes à execucao do programa
    // ainda: o programa aloca enderecos contiguos e decrescentes, como no exemplo abaixo:
    //    0x3246fff9d6
    //    0x3246fff9d5
    //    0x3246fff9d4
    //    0x3246fff9d3
    //    0x3246fff9d2
    //    0x3246fff9d1
    //    0x3246fff9d0
    //    0x3246fff9cf
    //    0x3246fff9ce
    //    0x3246fff9cd
    //    0x3246fff9cc
    //    0x3246fff9cb
    //    0x3246fff9ca
    //    0x3246fff9c9
    //    0x3246fff9c8
    //    0x3246fff9c7
    //    0x3246fff9c6
    //    0x3246fff9c5
    //    0x3246fff9d6
    //    0x3246fff9c4
    //    0x3246fff9c3
    //    0x3246fff9c2
    //    0x3246fff9c1
    //    0x3246fff9c0
    //    0x3246fff9bf
    // o passo entre eles eh -1 porque bool soh ocupa 1 byte

}