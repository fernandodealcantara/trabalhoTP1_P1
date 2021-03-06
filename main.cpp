#include <iostream>
#include "dominios.h" // Dominios que vao ser testados
#include "teste_dominio.h" // Testes para testar os dominios da classe dominios.h
#include "entidades.h" // Entidades que vao ser testadas

using namespace std;

int main(){
    // Instancias para testes de dominios
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
    // Instancias para testes de entidades
    Usuario usuario;

    //Testando domínio Numero
    switch(testeNumero.run()){
        case TUNumero::SUCESSO: cout << "SUCESSO - NUMERO" << endl;
                                break;
        case TUNumero::FALHA  : cout << "FALHA   - NUMERO" << endl;
                                break;
    }

    //Testando domínio Moeda
    switch(testeMoeda.run()){
        case TUMoeda::SUCESSO: cout << "SUCESSO - MOEDA" << endl;
                                break;
        case TUMoeda::FALHA  : cout << "FALHA   - MOEDA" << endl;
                                break;
    }

    //Testando domínio Descricao
    switch(testeDescricao.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
                                break;
        case TUDescricao::FALHA  : cout << "FALHA   - DESCRICAO" << endl;
                                break;
    }

    //Testando domínio Nome
    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA   - NOME" << endl;
                                break;
    }


    //Testando domínio Classe
    switch(testeClasse.run()){
        case TUClasse::SUCESSO: cout << "SUCESSO - CLASSE" << endl;
                                break;
        case TUClasse::FALHA  : cout << "FALHA   - CLASSE" << endl;
                                break;
    }


    //Testando domínio Endereco
    switch(testeEndereco.run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - ENDERECO" << endl;
                                break;
        case TUEndereco::FALHA  : cout << "FALHA   - ENDERECO" << endl;
                                break;
    }

    //Testando domínio Data
    switch(testeData.run()){
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - DATA" << endl;
                                break;
    }

    //Testando domínio Codigo
    switch(testeCodigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

    //Testando domínio Senha
    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - SENHA" << endl;
                                break;
    }

    //Testando domínio Email
    switch(testeEmail.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
                                break;
        case TUEmail::FALHA  : cout << "FALHA   - EMAIL" << endl;
                                break;
    }

    //Testando domínio Telefone
    switch(testeTelefone.run()){
        case TUTelefone::SUCESSO: cout << "SUCESSO - TELEFONE" << endl;
                                break;
        case TUTelefone::FALHA  : cout << "FALHA   - TELEFONE" << endl;
                                break;
    }

    // TESTES DAS ENTIDADES
    // ENTIDADE USUARIO
    // dominios necessarios
    Nome nome;
    Email email;
    Senha senha;
    Telefone telefone;
    // Inicializacao os dominios do usuario
    nome.setNome("Fernando");
    email.setEmail("fer@dominio");
    senha.setSenha("123abD");
    telefone.setTelefone("(013)-123456789");
    // Armazenando os dados do usuario
    usuario.setNome(nome);
    usuario.setEmail(email);
    usuario.setSenha(senha);
    usuario.setTelefone(telefone);
    // Visualizando os dados do usuario
    cout << usuario.getNome().getNome() << endl;
    cout << usuario.getEmail().getEmail() << endl;
    cout << usuario.getSenha().getSenha() << endl;
    cout << usuario.getTelefone().getTelefone() << endl;


    return 0;
}
