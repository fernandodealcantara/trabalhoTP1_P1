#include <iostream>
#include "dominios.h"

using namespace std;

int main(){
    Numero num;
    Moeda moeda;
    Descricao descricao;
    Nome nome;
    Classe classe;
    Endereco endereco;
    Data data;
    Codigo codigo;
    Senha senha;
    Email email;


    //Testando classe Numero
    try{
        num.setNumero(15);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

    cout << "Numero: " << num.getNumero() << endl;


    //Testando classe Moeda
    try{
        moeda.setMoeda("542.000,00");
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

    cout << "Moeda: " << moeda.getMoeda() << endl;


    //Testando classe Descricao
    try{
        descricao.setDescricao("Casa grande e bem alocada.");
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

    cout << "Descricao: " << descricao.getDescricao() << endl;


    //Testando classe Nome
    try{
        nome.setNome("Fernando A. Barreto");
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

    cout << "Nome: " << nome.getNome() << endl;


    //Testando classe Classe

    try{
        classe.setClasse(1);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

    cout << "Classe: " << classe.getClasse() << endl;


    //Testando classe Endereco

    try{
        endereco.setEndereco("2981 Springs Apt. 65");
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

    cout << "Endereco: " << endereco.getEndereco() << endl;


     //Testando classe Data

    try{
        data.setData("28-02-21");
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

    cout << "Data: " << data.getData() << endl;
    cout << "Eh ano bissexto: " << boolalpha << data.isBissexto() << endl;


    //Testando classe Codigo

    try{
        codigo.setCodigo("00A1B");
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

    cout << "Codigo: " << codigo.getCodigo() << endl;


    //Testando classe Senha

    try{
        senha.setSenha("abBC15");
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

    cout << "Senha: " << senha.getSenha() << endl;


    //Testando classe Email

    try{
        email.setEmail("nome.nome2@dominio");
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

    cout << "Email: " << email.getEmail() << endl;

    return 0;
}
