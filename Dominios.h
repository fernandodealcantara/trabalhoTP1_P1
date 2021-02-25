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

        void setValor(int valor);

///
/// Retorna valor
///
/// @return valor
///

        int getValor();
};

inline int Numero::getValor(){
    return valor;
}

///
/// Padrao para representacao de moeda
///
/// Regras de formato:
///
/// - Moeda valida apenas de 0,00 a 1.000.000,00
///

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
        void setValor(string valor);
///
/// Retorna valor da moeda
///
/// @return valor
///
        string getValor();

};

inline string Moeda::getValor(){
    return valor;
}

///
/// Padrao para representacao da descricao
///
/// Regras de formato:
///
/// - Descricoes aceitam 5 a 30 caracteres e eh terminado por ponto.
///
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
        void setTexto(string texto);

///
/// Retorna o texto da descricao
///
/// @return string
///
        string getTexto();

};

inline string Descricao::getTexto(){
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


#endif // DOMINIOS_H_INCLUDED
