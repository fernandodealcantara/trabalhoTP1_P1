#ifndef TESTES_DOMINIOS_H_INCLUDED
#define TESTES_DOMINIOS_H_INCLUDED

#include "dominios.h"


using namespace std;


// Declara��o de classe de teste de unidade do dom�nio Numero.
// Classe feita por Andre Mat: 190084197
class TUNumero {

private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const static int VALOR_VALIDO   = 20;
    const static int VALOR_INVALIDO = 30;

    // Refer�ncia para o objeto a ser testado.

    Numero *numero;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declara��o de classe de teste de unidade do dom�nio Moeda.
// Classe feita por Andre Mat: 190084197
class TUMoeda {

private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const string VALOR_VALIDO   = "1.000.000,00";
    const string VALOR_INVALIDO = "2.000.000,00";

    // Refer�ncia para o objeto a ser testado.

    Moeda *moeda;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declara��o de classe de teste de unidade do dom�nio Descricao.
// Classe feita por Andre Mat: 190084197
class TUDescricao {

private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const string VALOR_VALIDO   = "Casa grande e bem alocada.";
    const string VALOR_INVALIDO = "Casa pequena e nao muito bem alocada";

    // Refer�ncia para o objeto a ser testado.

    Descricao *descricao;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declara��o de classe de teste de unidade do dom�nio Nome.
// Classe feita por Andre Mat: 190084197
class TUNome {

private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const string VALOR_VALIDO   = "Fernando A. Barreto";
    const string VALOR_INVALIDO = "andre ivan lira de castro";

    // Refer�ncia para o objeto a ser testado.

    Nome *nome;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declara��o de classe de teste de unidade do dom�nio Classe.
// Classe feita por Andre Mat: 190084197
class TUClasse {

private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const static int VALOR_VALIDO   = 1;
    const static int VALOR_INVALIDO = 100;

    // Refer�ncia para o objeto a ser testado.

    Classe *classe;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declara��o de classe de teste de unidade do dom�nio Endereco.
// Classe feita por Andre Mat: 190084197
class TUEndereco {

private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const string VALOR_VALIDO   = "2981 Springs Apt. 65";
    const string VALOR_INVALIDO = "BAIRRO M NORTE QNM 38 CONJUTO R3 CASA 2 ";

    // Refer�ncia para o objeto a ser testado.

    Endereco *endereco;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declara��o de classe de teste de unidade do dom�nio Data.
// Classe feita por Andre Mat: 190084197
class TUData {

private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const string VALOR_VALIDO   = "28-02-21";
    const string VALOR_INVALIDO = "28-12-2000 ";

    // Refer�ncia para o objeto a ser testado.

    Data *data;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declara��o de classe de teste de unidade do dom�nio Codigo.
// Classe feita por Andre Mat: 190084197
class TUCodigo {

private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const string VALOR_VALIDO   = "ABC12";
    const string VALOR_INVALIDO = "AabC123";

    // Refer�ncia para o objeto a ser testado.

    Codigo *codigo;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declara��o de classe de teste de unidade do dom�nio Senha.
// Classe feita por Andre Mat: 190084197
class TUSenha {

private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const string VALOR_VALIDO   = "abBC15";
    const string VALOR_INVALIDO = "AabC123";

    // Refer�ncia para o objeto a ser testado.

    Senha *senha;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declara��o de classe de teste de unidade do dom�nio Email.
// Classe feita por Andre Mat: 190084197
class TUEmail {

private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const string VALOR_VALIDO   = "nome.nome2@dominio";
    const string VALOR_INVALIDO = "nome.doutorestranho@dominio";

    // Refer�ncia para o objeto a ser testado.

    Email *email;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declara��o de classe de teste de unidade do dom�nio Telefone.
// Classe feita por Andre Mat: 190084197
class TUTelefone {

private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const string VALOR_VALIDO   = "(015)-497815000";
    const string VALOR_INVALIDO = "(61)-9497815000";

    // Refer�ncia para o objeto a ser testado.

    Telefone *telefone;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};
#endif // TESTES_DOMINIOS_H_INCLUDED

