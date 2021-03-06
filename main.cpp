#include <iostream>
#include "dominios.h" // Dominios que vao ser testados
#include "teste_dominio.h" // Testes para testar os dominios da classe dominios.h

using namespace std;

int main(){
    // Instancias para teste de dominio
    TUNumero testeNumero;
    TUMoeda testeMoeda;
    TUDescricao testeDescricao;
    TUNome testeNome;
    TUClasse testeClasse;
    TUEndereco testeEndereco;
    TUData testeData;
    TUCodigo testeCodigo;
    TUSenha testeSenha;
    TUEmail testeEmail;
    TUTelefone testeTelefone;

    //Testando dom�nio Numero
    switch(testeNumero.run()){
        case TUNumero::SUCESSO: cout << "SUCESSO - NUMERO" << endl;
                                break;
        case TUNumero::FALHA  : cout << "FALHA   - NUMERO" << endl;
                                break;
    }

    //Testando dom�nio Moeda
    switch(testeMoeda.run()){
        case TUMoeda::SUCESSO: cout << "SUCESSO - MOEDA" << endl;
                                break;
        case TUMoeda::FALHA  : cout << "FALHA   - MOEDA" << endl;
                                break;
    }

    //Testando dom�nio Descricao
    switch(testeDescricao.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
                                break;
        case TUDescricao::FALHA  : cout << "FALHA   - DESCRICAO" << endl;
                                break;
    }

    //Testando dom�nio Nome
    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA   - NOME" << endl;
                                break;
    }


    //Testando dom�nio Classe
    switch(testeClasse.run()){
        case TUClasse::SUCESSO: cout << "SUCESSO - CLASSE" << endl;
                                break;
        case TUClasse::FALHA  : cout << "FALHA   - CLASSE" << endl;
                                break;
    }


    //Testando dom�nio Endereco
    switch(testeEndereco.run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - ENDERECO" << endl;
                                break;
        case TUEndereco::FALHA  : cout << "FALHA   - ENDERECO" << endl;
                                break;
    }

    //Testando dom�nio Data
    switch(testeData.run()){
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - DATA" << endl;
                                break;
    }

    //Testando dom�nio Codigo
    switch(testeCodigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

    //Testando dom�nio Senha
    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - SENHA" << endl;
                                break;
    }

    //Testando dom�nio Email
    switch(testeEmail.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
                                break;
        case TUEmail::FALHA  : cout << "FALHA   - EMAIL" << endl;
                                break;
    }

    //Testando dom�nio Telefone
    switch(testeTelefone.run()){
        case TUTelefone::SUCESSO: cout << "SUCESSO - TELEFONE" << endl;
                                break;
        case TUTelefone::FALHA  : cout << "FALHA   - TELEFONE" << endl;
                                break;
    }

    return 0;
}
