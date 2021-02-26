#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;


///
/// Padrao para representacao de numero
///
/// Regras de formato:
///
/// - Numero valido apenas de 0 a 20
///
// Classe Numero feita por Fernando Mat: 190125586
class Numero {
    private:
        int valor;
        void validar(int valor);

    public:

///
/// Armazena o numero informado caso o mesmo seja valido
///
/// Lanca excecao caso o valor informado seja invalido
///
/// @param valor numero
///
/// @throw invalid_argument
///

        void setNumero(int valor);

///
/// Retorna valor
///
/// @return valor
///

        int getNumero();
};

inline int Numero::getNumero(){
    return valor;
}

///
/// Padrao para representacao de moeda
///
/// Regras de formato:
///
/// - Moeda valida apenas de 0,00 a 1.000.000,00
///
// Classe Moeda feita por Fernando Mat: 190125586
class Moeda {
    private:
        string valor;
        void validar(string valor);

    public:

///
/// Armazena o valor informado caso o mesmo seja valido
///
/// Lanca excecao caso o valor informado seja invalido
///
/// @param valor da moeda
///
/// @throw invalid_argument
///

        void setMoeda(string valor);

///
/// Retorna valor da moeda
///
/// @return valor
///

        string getMoeda();

};

inline string Moeda::getMoeda(){
    return valor;
}

///
/// Padrao para representacao da descricao
///
/// Regras de formato:
///
/// - Descricoes aceitam 5 a 30 caracteres e eh terminado por ponto.
///
// Classe Descricao feita por Fernando Mat: 190125586
class Descricao{
    private:
        string texto;
        void validar(string texto);

    public:

///
/// Armazena o texto da descricao
///
/// Lanca excecao caso o texto informado seja invalido
///
/// @param texto descricao
///
/// @throw invalid_argument
///

        void setDescricao(string texto);

///
/// Retorna o texto da descricao
///
/// @return string
///

        string getDescricao();

};

inline string Descricao::getDescricao(){
    return texto;
}

///
/// Padrao para representacao do nome
///
/// Regras de formato:
///
/// - Nome de 5 a 25 caracteres podendo ser letras de A-Z a-z, ponto ou espaco.
/// Pontos precedem letra, nao ha espacos em sequencia e primeira letra de cada termo eh maiuscula.
///
// Classe Nome feita por Fernando Mat: 190125586
class Nome{
    private:
        string nome;
        void validar(string nome);

    public:

///
/// Armazena o nome
///
/// Lanca excecao caso o nome informado seja invalido
///
/// @param string nome
///
/// @throw invalid_argument
///

        void setNome(string nome);

///
/// Retorna o nome
///
/// @return string
///

        string getNome();
};

inline string Nome::getNome(){
    return nome;
}

///
/// Padrao para representacao de classe
///
/// Regras de formato:
///
/// - 1 para apartamento, 2 para casa e 3 para quarto.
///
// Classe Classe feita por Andre Mat: 190084197
class Classe{
    private:
        const static int APARTAMENTO = 1;
        const static int CASA = 2;
        const static int QUARTO = 3;
        string classe;
        void validar(int valor);

    public:

///
/// Armazena o numero informado e caso o mesmo seja valido atribui uma classe
///
/// Lanca excecao caso o valor informado seja invalido
///
/// @param valor classe
///
/// @throw invalid_argument
///

        void setClasse(int valor);

///
/// Retorna classe
///
/// @return classe
///

        string getClasse();

};

inline string Classe::getClasse(){
    return classe;
}

///
/// Padrao para representacao de endereço
///
/// Regras de formato:
///
/// - Nome de 5 a 20 caracteres podendo ser letras de A-Z a-z,digito 0-9, ponto ou espaco.
///
// Classe Endereco feita por Andre Mat: 190084197
class Endereco {
    private:
        string endereco;
        void validar(string endereco);

    public:

///
/// Armazena o endereco
///
/// Lanca excecao caso o endereco informado seja invalido
///
/// @param string endereco
///
/// @throw invalid_argument
///

        void setEndereco(string endereco);

///
/// Retorna o endereco
///
/// @return string endereco
///

        string getEndereco();

};

inline string Endereco::getEndereco(){
    return endereco;
}

///
/// Padrao para representacao da data
///
/// Regras de formato:
///
/// - Data formato DD-MM-AA onde DD de 01 a 31, MM de 01 a 12 e AA de 21 a 99
///Data considera anos bissextos
///
// Classe Data feita por Fernando Mat: 190125586
class Data {
    private:
        string data;
        bool bissexto;
        void validar(string data);

    public:

///
/// Armazena a data
///
/// Lanca excecao caso a data informada seja invalida
///
/// @param string data
///
/// @throw invalid_argument
///

        void setData(string data);

///
/// Retorna a data
///
/// @return string data
///

        string getData();

///
/// Retorna se o ano eh bissexto
///
/// @return bool
///

        bool isBissexto();
};

inline string Data::getData(){
    return data;
}

inline bool Data::isBissexto(){
    return bissexto;
}

///
/// Padrao para representacao do codigo
///
/// Regras de formato:
///
/// - Formato XXXXX, X eh letra maiuscula A-Z ou digito 0-9, codigo nao eh 00000
///
// Classe Codigo feita por Fernando Mat: 190125586
class Codigo {
    private:
        string codigo;
        void validar(string codigo);

    public:

///
/// Armazena o codigo
///
/// Lanca excecao caso o codigo esteja em formato invalido
///
/// @param string codigo
///
/// @throw invalid_argument
///

        void setCodigo(string codigo);

///
/// Retorna o codigo
///
/// @return string codigo
///

        string getCodigo();
};

inline string Codigo::getCodigo(){
    return codigo;
}


#endif // DOMINIOS_H_INCLUDED
