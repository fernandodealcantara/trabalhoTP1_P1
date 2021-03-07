#ifndef TESTES_ENTIDADES_H_INCLUDED
#define TESTES_ENTIDADES_H_INCLUDED

#include "entidades.h"

using namespace std;

// Teste de unidade da classe imovel
// Classe feita por Fernando Mat: 190125586
class TUImovel {
private:
    // Valores validos para testar a entidade
    const string VALOR_VALIDO_CODIGO = "AD213";
    const static int VALOR_VALIDO_CLASSE = 3;
    const string VALOR_VALIDO_DESCRICAO = "Casa na praia.";
    const string VALOR_VALIDO_ENDERECO = "Hawaii";
    const string VALOR_VALIDO_DATAINICIAL = "15-03-21";
    const string VALOR_VALIDO_DATAFINAL = "31-03-21";
    const static int VALOR_VALIDO_HOSPEDES = 5;
    const string VALOR_VALIDO_VALOR = "10.000,00";

    // Referencia para o objeto a ser testado
    Imovel *imovel;

    // Estado do teste
    int estado;

    // Metodos para efetuar o teste
    void setUp();
    void tearDown();
    void testarCenario();
public:
    // Constantes para reportar o resultado do teste
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    // Metodo para executar o teste
    int run();
};

// Teste de unidade da classe proposta
// Classe feita por Fernando Mat: 190125586
class TUProposta {
private:
    // Valores validos para testar a entidade
    const string VALOR_VALIDO_CODIGO = "B4433";
    const string VALOR_VALIDO_DATAINICIAL = "09-05-21";
    const string VALOR_VALIDO_DATAFINAL = "22-05-21";
    const static int VALOR_VALIDO_HOSPEDES = 4;
    const string VALOR_VALIDO_VALOR = "9.320,00";

    // Referencia para o objeto a ser testado
    Proposta *proposta;

    // Estado do teste
    int estado;

    // Metodos para efetuar o teste
    void setUp();
    void tearDown();
    void testarCenario();
public:
    // Constantes para reportar o resultado do teste
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    // Metodo para executar o teste
    int run();
};

// Teste de unidade da classe usuario
// Classe feita por Fernando Mat: 190125586
class TUUsuario {
private:
    // Valores validos para testar a entidade
    const string VALOR_VALIDO_NOME = "Fulano";
    const string VALOR_VALIDO_EMAIL = "fulano@dominio";
    const string VALOR_VALIDO_SENHA = "123abD";
    const string VALOR_VALIDO_TELEFONE = "(013)-123456789";

    // Referencia para o objeto a ser testado
    Usuario *usuario;

    // Estado do teste
    int estado;

    // Metodos para efetuar o teste
    void setUp();
    void tearDown();
    void testarCenario();
public:
    // Constantes para reportar o resultado do teste
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    // Metodo para executar o teste
    int run();
};


#endif // TESTES_ENTIDADES_H_INCLUDED
