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
/// @param valor numero
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
        void setTexto(string texto);
        string getTexto();

};

inline string Descricao::getTexto(){
    return texto;
}











#endif // DOMINIOS_H_INCLUDED
