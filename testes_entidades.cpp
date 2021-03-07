#include "testes_entidades.h"


// Definicoes de metodos para testes da entidade imovel

void TUImovel::setUp(){
    imovel = new Imovel();
    estado = SUCESSO;
}

void TUImovel::tearDown(){
    delete imovel;
}

void TUImovel::testarCenario(){
    // Dominios necessarios
    Codigo codigo;
    Classe classe;
    Descricao descricao;
    Endereco endereco;
    Data dataInicial, dataFinal;
    Numero hospedes;
    Moeda valor;
    // Inicializando os dominios
    codigo.setCodigo(VALOR_VALIDO_CODIGO);
    classe.setClasse(VALOR_VALIDO_CLASSE);
    descricao.setDescricao(VALOR_VALIDO_DESCRICAO);
    endereco.setEndereco(VALOR_VALIDO_ENDERECO);
    dataInicial.setData(VALOR_VALIDO_DATAINICIAL);
    dataFinal.setData(VALOR_VALIDO_DATAFINAL);
    hospedes.setNumero(VALOR_VALIDO_HOSPEDES);
    valor.setMoeda(VALOR_VALIDO_VALOR);
    // Armazenando os dados do imovel
    imovel->setCodigo(codigo);
    imovel->setClasse(classe);
    imovel->setDescricao(descricao);
    imovel->setEndereco(endereco);
    imovel->setDataInicial(dataInicial);
    imovel->setDataFinal(dataFinal);
    imovel->setHospedes(hospedes);
    imovel->setValor(valor);
    // Verificando os valores armazenados
    if(imovel->getCodigo().getCodigo() != VALOR_VALIDO_CODIGO)
        estado = FALHA;
    if(imovel->getClasse().getClasse() != VALOR_VALIDO_CLASSE)
        estado = FALHA;
    if(imovel->getDescricao().getDescricao() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;
    if(imovel->getEndereco().getEndereco() != VALOR_VALIDO_ENDERECO)
        estado = FALHA;
    if(imovel->getDataInicial().getData() != VALOR_VALIDO_DATAINICIAL)
        estado = FALHA;
    if(imovel->getDataFinal().getData() != VALOR_VALIDO_DATAFINAL)
        estado = FALHA;
    if(imovel->getHospedes().getNumero() != VALOR_VALIDO_HOSPEDES)
        estado = FALHA;
    if(imovel->getValor().getMoeda() != VALOR_VALIDO_VALOR)
        estado = FALHA;
}

int TUImovel::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}

// Definicoes de metodos para testes da entidade proposta

void TUProposta::setUp(){
    proposta = new Proposta();
    estado = SUCESSO;
}

void TUProposta::tearDown(){
    delete proposta;
}

void TUProposta::testarCenario(){
    // Dominios necessarios
    Codigo codigo;
    Data dataInicial, dataFinal;
    Numero hospedes;
    Moeda valor;
    // Inicializando os dominios
    codigo.setCodigo(VALOR_VALIDO_CODIGO);
    dataInicial.setData(VALOR_VALIDO_DATAINICIAL);
    dataFinal.setData(VALOR_VALIDO_DATAFINAL);
    hospedes.setNumero(VALOR_VALIDO_HOSPEDES);
    valor.setMoeda(VALOR_VALIDO_VALOR);
    // Armazenando os dados da proposta
    proposta->setCodigo(codigo);
    proposta->setDataInicial(dataInicial);
    proposta->setDataFinal(dataFinal);
    proposta->setHospedes(hospedes);
    proposta->setValor(valor);
    // Verificando os valores armazenados
    if(proposta->getCodigo().getCodigo() != VALOR_VALIDO_CODIGO)
        estado = FALHA;
    if(proposta->getDataInicial().getData() != VALOR_VALIDO_DATAINICIAL)
        estado = FALHA;
    if(proposta->getDataFinal().getData() != VALOR_VALIDO_DATAFINAL)
        estado = FALHA;
    if(proposta->getHospedes().getNumero() != VALOR_VALIDO_HOSPEDES)
        estado = FALHA;
    if(proposta->getValor().getMoeda() != VALOR_VALIDO_VALOR)
        estado = FALHA;
}

int TUProposta::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}

// Definicoes de metodos para testes da entidade usuario

void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testarCenario(){
    // dominios necessarios
    Nome nome;
    Email email;
    Senha senha;
    Telefone telefone;
    // Inicializando os dominios
    nome.setNome(VALOR_VALIDO_NOME);
    email.setEmail(VALOR_VALIDO_EMAIL);
    senha.setSenha(VALOR_VALIDO_SENHA);
    telefone.setTelefone(VALOR_VALIDO_TELEFONE);
    // Armazenando os dados do usuario
    usuario->setNome(nome);
    usuario->setEmail(email);
    usuario->setSenha(senha);
    usuario->setTelefone(telefone);
    // Verificando os valores armazenados
    if(usuario->getNome().getNome() != VALOR_VALIDO_NOME)
        estado = FALHA;
    if(usuario->getEmail().getEmail() != VALOR_VALIDO_EMAIL)
        estado = FALHA;
    if(usuario->getSenha().getSenha() != VALOR_VALIDO_SENHA)
        estado = FALHA;
    if(usuario->getTelefone().getTelefone() != VALOR_VALIDO_TELEFONE)
        estado = FALHA;
}

int TUUsuario::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
