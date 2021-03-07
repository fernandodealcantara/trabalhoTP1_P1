#ifndef TESTES_DOMINIOS_H_INCLUDED
#define TESTES_DOMINIOS_H_INCLUDED

#include "dominios.h"


using namespace std;


// Declaração de classe de teste de unidade do domínio Numero.
// Classe feita por Andre Mat: 190084197
class TUNumero {

private:

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = 20;
    const static int VALOR_INVALIDO = 30;

    // Referência para o objeto a ser testado.

    Numero *numero;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declaração de classe de teste de unidade do domínio Moeda.
// Classe feita por Andre Mat: 190084197
class TUMoeda {

private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "1.000.000,00";
    const string VALOR_INVALIDO = "2.000.000,00";

    // Referência para o objeto a ser testado.

    Moeda *moeda;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declaração de classe de teste de unidade do domínio Descricao.
// Classe feita por Andre Mat: 190084197
class TUDescricao {

private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "Casa grande e bem alocada.";
    const string VALOR_INVALIDO = "Casa pequena e nao muito bem alocada";

    // Referência para o objeto a ser testado.

    Descricao *descricao;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declaração de classe de teste de unidade do domínio Nome.
// Classe feita por Andre Mat: 190084197
class TUNome {

private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "Fernando A. Barreto";
    const string VALOR_INVALIDO = "andre ivan lira de castro";

    // Referência para o objeto a ser testado.

    Nome *nome;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declaração de classe de teste de unidade do domínio Classe.
// Classe feita por Andre Mat: 190084197
class TUClasse {

private:

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = 1;
    const static int VALOR_INVALIDO = 100;

    // Referência para o objeto a ser testado.

    Classe *classe;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declaração de classe de teste de unidade do domínio Endereco.
// Classe feita por Andre Mat: 190084197
class TUEndereco {

private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "2981 Springs Apt. 65";
    const string VALOR_INVALIDO = "BAIRRO M NORTE QNM 38 CONJUTO R3 CASA 2 ";

    // Referência para o objeto a ser testado.

    Endereco *endereco;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declaração de classe de teste de unidade do domínio Data.
// Classe feita por Andre Mat: 190084197
class TUData {

private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "28-02-21";
    const string VALOR_INVALIDO = "28-12-2000 ";

    // Referência para o objeto a ser testado.

    Data *data;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declaração de classe de teste de unidade do domínio Codigo.
// Classe feita por Andre Mat: 190084197
class TUCodigo {

private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "ABC12";
    const string VALOR_INVALIDO = "AabC123";

    // Referência para o objeto a ser testado.

    Codigo *codigo;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declaração de classe de teste de unidade do domínio Senha.
// Classe feita por Andre Mat: 190084197
class TUSenha {

private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "abBC15";
    const string VALOR_INVALIDO = "AabC123";

    // Referência para o objeto a ser testado.

    Senha *senha;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declaração de classe de teste de unidade do domínio Email.
// Classe feita por Andre Mat: 190084197
class TUEmail {

private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "nome.nome2@dominio";
    const string VALOR_INVALIDO = "nome.doutorestranho@dominio";

    // Referência para o objeto a ser testado.

    Email *email;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declaração de classe de teste de unidade do domínio Telefone.
// Classe feita por Andre Mat: 190084197
class TUTelefone {

private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "(015)-497815000";
    const string VALOR_INVALIDO = "(61)-9497815000";

    // Referência para o objeto a ser testado.

    Telefone *telefone;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};
#endif // TESTES_DOMINIOS_H_INCLUDED

