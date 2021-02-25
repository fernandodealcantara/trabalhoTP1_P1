#include <iostream>
#include "Dominios.h"

using namespace std;

int main(){
    Numero num;
    Moeda moeda;
    Descricao descricao;
    Nome nome;

    //Testando classe numero
    try{
        num.setValor(15);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

    cout << "Numero: " << num.getValor() << endl;

    //Testando classe moeda
    try{
        moeda.setValor("542.000,00");
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }
    cout << "Moeda: " << moeda.getValor() << endl;

    //Testando classe descricao
    try{
        descricao.setTexto("Casa grande e bem alocada.");
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }
    cout << "Descricao: " << descricao.getTexto() << endl;

    //Testando classe nome
    try{
        nome.setNome("Fernando A. Barreto");
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }
    cout << "Nome: " << nome.getNome() << endl;

}
