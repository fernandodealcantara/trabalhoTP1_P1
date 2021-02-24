#include <iostream>

#include "Dominios.h"

using namespace std;

int main(){
    Numero num;
    Moeda moeda;
    Descricao descricao;

    try{
        num.setValor(15);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

    cout << "Numero: " << num.getValor() << endl;

    try{
        moeda.setValor("542.000,00");
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }
    cout << "Moeda: " << moeda.getValor() << endl;

    try{
        descricao.setTexto("Casa grande e bem alocada.");
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }
    cout << "Descricao: " << descricao.getTexto() << endl;

}
