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
    Usuario usuario;
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
    cout << "Usuario:" << endl;
    cout << usuario.getNome().getNome() << endl;
    cout << usuario.getEmail().getEmail() << endl;
    cout << usuario.getSenha().getSenha() << endl;
    cout << usuario.getTelefone().getTelefone() << endl;
    // ENTIDADE IMOVEL
    Imovel imovel;
    // dominios necessarios
    Codigo codigo;
    Classe classe;
    Descricao descricao;
    Endereco endereco;
    Data dataInicial, dataFinal;
    Numero hospedes;
    Moeda valor;
    // Inicializando os dominios do imovel
    codigo.setCodigo("AD213");
    classe.setClasse(3);
    descricao.setDescricao("Casa na praia.");
    endereco.setEndereco("Hawaii");
    dataInicial.setData("15-03-21");
    dataFinal.setData("31-03-21");
    hospedes.setNumero(5);
    valor.setMoeda("10.000,00");
    // Armazenando os dados do imovel
    imovel.setCodigo(codigo);
    imovel.setClasse(classe);
    imovel.setDescricao(descricao);
    imovel.setEndereco(endereco);
    imovel.setDataInicial(dataInicial);
    imovel.setDataFinal(dataFinal);
    imovel.setHospedes(hospedes);
    imovel.setValor(valor);
    // Visualizando os dados do imovel
    cout << "Imovel:" << endl;
    cout << imovel.getCodigo().getCodigo() << endl;
    cout << imovel.getClasse().getClasse() << endl;
    cout << imovel.getDescricao().getDescricao() << endl;
    cout << imovel.getEndereco().getEndereco() << endl;
    cout << imovel.getDataInicial().getData() << endl;
    cout << imovel.getDataFinal().getData() << endl;
    cout << imovel.getHospedes().getNumero() << endl;
    cout << imovel.getValor().getMoeda() << endl;
    // ENTIDADE PROPOSTA
    Proposta proposta;
    // Dominios necessarios
    Codigo codigoProp;
    Data dataInicialProp, dataFinalProp;
    Numero hospedesProp;
    Moeda valorProp;
    // Inicializando os dominios do proposta
    codigoProp.setCodigo("AD111");
    dataInicialProp.setData("16-03-21");
    dataFinalProp.setData("20-03-21");
    hospedesProp.setNumero(4);
    valorProp.setMoeda("9.500,00");
    // Armazenando os dados da proposta
    proposta.setCodigo(codigoProp);
    proposta.setDataInicial(dataInicialProp);
    proposta.setDataFinal(dataFinalProp);
    proposta.setHospedes(hospedesProp);
    proposta.setValor(valorProp);
    // Visualizando dados da proposta
    cout << "Proposta:" << endl;
    cout << proposta.getCodigo().getCodigo() << endl;
    cout << proposta.getDataInicial().getData() << endl;
    cout << proposta.getDataFinal().getData() << endl;
    cout << proposta.getHospedes().getNumero() << endl;
    cout << proposta.getValor().getMoeda() << endl;

    return 0;
}
