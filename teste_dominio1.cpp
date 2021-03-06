#include "testedominio.h"


// Definições de métodos de teste de unidade do domínio Numero.

void TUNumero::setUp(){
    numero = new Numero();
    estado = SUCESSO;
}

void TUNumero::tearDown(){
    delete numero;
}

void TUNumero::testarCenarioSucesso(){
    try{
        numero->setNumero(VALOR_VALIDO);
        if (numero->getNumero() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNumero::testarCenarioFalha(){
    try{
        numero->setNumero(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (numero->getNumero() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUNumero::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// Definições de métodos de teste de unidade do domínio Moeda.

void TUMoeda::setUp(){
    moeda = new Moeda();
    estado = SUCESSO;
}

void TUMoeda::tearDown(){
    delete moeda;
}

void TUMoeda::testarCenarioSucesso(){
    try{
        moeda->setMoeda(VALOR_VALIDO);
        if (moeda->getMoeda() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUMoeda::testarCenarioFalha(){
    try{
        moeda->setMoeda(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (moeda->getMoeda() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUMoeda::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos de teste de unidade do domínio Descricao.

void TUDescricao::setUp(){
    descricao = new Descricao();
    estado = SUCESSO;
}

void TUDescricao::tearDown(){
    delete descricao;
}

void TUDescricao::testarCenarioSucesso(){
    try{
        descricao->setDescricao(VALOR_VALIDO);
        if (descricao->getDescricao() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDescricao::testarCenarioFalha(){
    try{
        descricao->setDescricao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (descricao->getDescricao() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUDescricao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// Definições de métodos de teste de unidade do domínio Nome.

void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(VALOR_VALIDO);
        if (nome->getNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getNome() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos de teste de unidade do domínio Classe.

void TUClasse::setUp(){
    classe = new Classe();
    estado = SUCESSO;
}

void TUClasse::tearDown(){
    delete classe;
}

void TUClasse::testarCenarioSucesso(){
    try{
        classe->setClasse(VALOR_VALIDO);
        if (classe->getClasse() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUClasse::testarCenarioFalha(){
    try{
        classe->setClasse(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (classe->getClasse() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUClasse::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos de teste de unidade do domínio Endereco.

void TUEndereco::setUp(){
    endereco = new Endereco();
    estado = SUCESSO;
}

void TUEndereco::tearDown(){
    delete endereco;
}

void TUEndereco::testarCenarioSucesso(){
    try{
        endereco->setEndereco(VALOR_VALIDO);
        if (endereco->getEndereco() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEndereco::testarCenarioFalha(){
    try{
        endereco->setEndereco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (endereco->getEndereco() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos de teste de unidade do domínio Data.

void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setData(VALOR_VALIDO);
        if (data->getData() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (data->getData() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos de teste de unidade do domínio Codigo.

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setCodigo(VALOR_VALIDO);
        if (codigo->getCodigo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setCodigo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->getCodigo() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// Definições de métodos de teste de unidade do domínio Senha.

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getSenha() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos de teste de unidade do domínio Email.

void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setEmail(VALOR_VALIDO);
        if (email->getEmail() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        email->setEmail(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getEmail() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos de teste de unidade do domínio Telefone.

void TUTelefone::setUp(){
    telefone = new Telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown(){
    delete telefone;
}

void TUTelefone::testarCenarioSucesso(){
    try{
        telefone->setTelefone(VALOR_VALIDO);
        if (telefone->getTelefone() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){
    try{
        telefone->setTelefone(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (telefone->getTelefone() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUTelefone::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

