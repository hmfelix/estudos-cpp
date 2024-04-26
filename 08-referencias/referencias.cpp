#include <iostream>

/*
na ultima licao, usamos o "operador de referencia", que eh o & usado como prefixo
ele eh a unica forma de obter o endereco de memoria de uma variavel caso ainda nao exista
um ponteiro estocando esse endereco

aqui vamos estudar a "referencia"
notar: "operador de referencia" e "referencia" sao coisas distintas

a referencia eh um sufixo na declaracao de tipo: int&, por exemplo
ela cria um sinonimo da variavel aa qual eh atribuida a referencia
portanto ela nao cria propriamente uma variavel

o seu poder reside no fato de que podemos escrever diretamente no endereco de memoria
da variavel referenciada

*/

void incrementar(int* valor) { // comento quando chamo a funcao
    (*valor)++; // usamos parenteses apenas pq a operacao de incremento tomaria precedencia
}

void incrementar2(int& valor) { // idem
    valor++;
}

void incrementar3(int valor) { // idem
    valor++;
}

int main() {

    // exemplo inicial simples:
    int x = 10;
    int& ref = x;
    ref = 20;
    std::cout << x << std::endl; // veja como escrevemos por cima de x usando ref
    std::cout << ref << std::endl; // e ambos sao iguais, pois ref le direto do endereco de memoria de x
    
    // por causa disso, nao podemos redefinir uma referencia
    // se fizessemos int y = 5; ref = y;, estaríamos escrevendo o valor de y no endereco de memoria de x
    // modificando o valor de x e nao da ref. ref vai continuar se referindo a x.
    // igualmente nao eh licito apenas declarar uma referencia sem defini-la

    // mais interessante:
    // suponha que queremos uma funcao que modifica o proprio endereco
    // de memoria do argumento
    // ou seja, ela nao retorna um novo valor, e sim produz um efeito colateral
    
    // podemos fazer isso de 2 jeitos:
    // (1) usando pointers: (ver definicao da funcao incrementar)
    //      precisamos pegar o endereco de memoria do argumento,
    //      depois desreferencia-lo para poder escrever diretamente nesse endereco
    //      (i.e. por cima do que ja esta definido para aquele valor)
    incrementar(&x);
    std::cout << x << std::endl; // notar que temos de passar um endereco como argumento
                                 // pq seu tipo foi definido como pointer

    // (2) usando referencia:
    // basta pegar a referencia do argumento
    incrementar2(x);
    std::cout << x << std::endl;

    // notar: sem a referencia, nao causamos o efeito dejesado (o valor nao muda)
    incrementar3(x);
    std::cout << x << std::endl;

    // ou seja, a referencia eh soh um atalho para pointer + desreferenciar

}