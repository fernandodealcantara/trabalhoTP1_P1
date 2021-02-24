#include <iostream>
#include <regex>
#include "Dominios.h"

using namespace std;

//Definicoes de metodos da classe Numero

void Numero::validar(int valor){
    if(valor < 0 || valor > 20)
        throw invalid_argument("Argumento invalido. Valores apenas de 0 a 20");
}

void Numero::setValor(int valor){
    validar(valor);
    this->valor = valor;
}

// Definicoes de metodos da classe Moeda

void Moeda::validar(string valor){
    // expressao regular para verificar o formato da moeda
    regex moeda_modelo("1.000.000,00|[0-9]{1,3}.[0-9]{3},[0-9]{2}|[0-9]{1,3},[0-9]{2}");
    // valor no formato valido retorna true, caso contrario false
    if(!regex_match(valor, moeda_modelo))
        throw invalid_argument("Argumento invalido. Valores apenas de 0,00 a 1.000.000,00");
}

void Moeda::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

// Definicoes de metodos da classe Descricao
void Descricao::validar(string texto){
    // expressao regular para verificar o formato da descricao
    regex texto_modelo(".{5,30}\\.");
    // descricao valida retorna true, caso contrario false
    if(!regex_match(texto, texto_modelo))
        throw invalid_argument("Argumento invalido. Descricoes com tamanho entre 5 e 30 terminados em ponto.");
}

void Descricao::setTexto(string texto){
    validar(texto);
    this->texto = texto;
}
