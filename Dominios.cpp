#include <iostream>
#include <regex>
#include "Dominios.h"

using namespace std;


//Definicoes de metodos da classe Numero

void Numero::validar(int valor){
    const int minimo = 0, maximo = 20;

    if(valor < minimo || valor > maximo)
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
        throw invalid_argument("Argumento invalido. Descricao deve conter entre 5 e 30 caracteres e terminar em ponto.");
}

void Descricao::setTexto(string texto){
    validar(texto);
    this->texto = texto;
}

// Definicoes de metodos da classe Nome

void Nome::validar(string nome){
    //expressao regular para verificar o formato do nome
    regex nome_modelo("([A-Z][A-Za-z]*\\.? ?)+");
    const int minimo = 5, maximo = 25;
    bool tamanho_valido = (nome.length() >= minimo && nome.length() <= maximo) ? true : false;

    // valida formato do nome e tamanho, caso invalido lanca excecao
    if(!regex_match(nome, nome_modelo) || !tamanho_valido)
        throw invalid_argument("Argumento invalido. Apenas 5 a 25 caracteres entre A-Z e a-z, ponto ou espaco.");

}

void Nome::setNome(string nome){
    validar(nome);
    this->nome = nome;
}

// Definicoes de metodos da classe Classe

void Classe::validar(int valor){
    if(valor != APARTAMENTO && valor != CASA && valor != QUARTO)
        throw invalid_argument("Argumento invalido. Valores apenas de 1 a 3");
}

void Classe::setClasse(int valor){
    validar(valor);
    switch(valor){
        case 1:
            this->classe = "apartamento";
            break;

        case 2:
            this->classe = "casa";
            break;

        case 3:
            this->classe = "quarto";
            break;

    }
}

// Definicoes de metodos da classe Endereco

void Endereco::validar(string endereco){
    //expressao regular para verificar o formato do endereco
    regex endereco_modelo("([A-Za-z0-9]+\\.? ?)+");
    const int minimo = 5, maximo = 20;
    bool tamanho_valido = (endereco.length() >= minimo && endereco.length() <= maximo) ? true : false;

    // valida formato do endereco e tamanho, caso invalido lanca excecao
    if(!regex_match(endereco, endereco_modelo) || !tamanho_valido)
        throw invalid_argument("Argumento invalido. Apenas 5 a 20 caracteres entre A-Z, a-z, 0-9, ponto ou espaco.");

}

void Endereco::setEndereco(string endereco){
    validar(endereco);
    this->endereco = endereco;
}

// Definicoes de metodos da classe Data

void Data::validar(string data){
    string DD = "(0[1-9]|[1-2][0-9]|3[0-1])";
    string MM = "(0[1-9]|[1][0-2])";
    string AA = "(2[1-9]|[3-9][0-9])";
    regex data_modelo(DD+"-"+MM+"-"+AA);

    if(!regex_match(data, data_modelo))
        throw invalid_argument("Argumento invalido. Apenas datas no formato DD-MM-AA");
}

void Data::setData(string data){
    validar(data);
    //ano em formato inteiro para verificar se eh bissexto
    int ano = stoi(data.substr(6, 2));

    this->bissexto = (ano % 4 == 0)? true: false;
    this->data = data;
}


