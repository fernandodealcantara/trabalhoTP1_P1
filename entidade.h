#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

///
/// Padr�o para representa��o do usu�rio
///
/// Regras de formato:
///
/// - Usu�rio contem nome, email, senha e telefone.
///
// Classe Usuario feita por Fernando Mat: 190125586
class Usuario {
private:
    Nome nome;
    Email email;
    Senha senha;
    Telefone telefone;
public:
    ///
    /// Armazena o nome
    ///
    // Metodos do atributo nome
    void setNome(const Nome &nome);
    ///
    /// Retorna o nome
    ///
    Nome getNome() const;
    ///
    /// Armazena o email
    ///
    // Metodos do atributo email
    void setEmail(const Email &email);
    ///
    /// Retorna o email
    ///
    Email getEmail() const;
    ///
    /// Armazena a senha
    ///
    // Metodos do atributo senha
    void setSenha(const Senha &senha);
    ///
    /// Retorna a senha
    ///
    Senha getSenha() const;
    ///
    /// Armazena o telefone
    ///
    // Metodos do atributo telefone
    void setTelefone(const Telefone &telefone);
    ///
    /// Retorna o telefone
    ///
    Telefone getTelefone() const;

};

inline void Usuario::setNome(const Nome &nome){
    this->nome = nome;
}

inline Nome Usuario::getNome() const{
    return nome;
}
inline void Usuario::setEmail(const Email &email){
    this->email = email;
}

inline Email Usuario::getEmail() const{
    return email;
}

inline void Usuario::setSenha(const Senha &senha){
    this->senha = senha;
}

inline Senha Usuario::getSenha() const{
    return senha;
}

inline void Usuario::setTelefone(const Telefone &telefone){
    this->telefone = telefone;
}

inline Telefone Usuario::getTelefone() const{
    return telefone;
}
///
/// Regras de formato:
///
/// - Usu�rio contem Código,classe,descrição,endereço,data inicial,data final, hóspedes, valor.
///
// Classe Usuario feita por Victor Hugo Mat: 190129794

class imovel{

    private:
        Codigo codigo;
        Classe classe;
        Descricao Descricao;
        Endereco endereco;
        Data_inicial data_inicial;
        Data_final data_final;
        Hospedes hospedes;
        Valor valor;
    public:
    ///
    /// Armazena o código
    ///
    // Metodos do atributo código
        void setCodigo(const Codigo &codigo);
        Nome getCodigo() const;
    ///
    /// Armazena o classe
    ///
    // Metodos do atributo classe
        void setClasse(const Classe &classe);
        Nome getClasse() const;
    ///
    /// Armazena o descrição
    ///
    // Metodos do atributo descrição
        void setDescricao(const Descricao &descricao);
        Nome getDescricao() const;
    ///
    /// Armazena o Endereço
    ///
    // Metodos do atributo endereço
        void setEndereco(const Endereco &endereco);
        Nome getEndereco() const;
    ///
    /// Armazena o data inicial
    ///
    // Metodos do atributo data inicial
        void setData_inicial(const Data_inicial &data_inicial);
        Nome getData_inicial() const;
    ///
    /// Armazena o data final
    ///
    // Metodos do atributo data final
        void setData_final(const Data_final &data_final);
        Nome getData_final() const;
    ///
    /// Armazena o hóspedes
    ///
    // Metodos do atributo hospedes
        void setHospede(const Hospedes &hospedes);
        Nome getHospedes() const;
    ///
    /// Armazena o valor
    ///
    // Metodos do atributo valor
        void setValor(const Valor &valor);
        Nome getValor() const;


}
inline void imovel::setCodigo(const Codigo &codigo){
    this->codigo=codigo;
}
inline Codigo imovel::getCodigo() const{
    return codigo;
}
inline void imovel::setClasse(const Classe &classe){
    this->classe=classe;
}
inline Classe imovel::getClasse() const{
    return classe;
}
inline void imovel::setDescricao(const Descricao &descricao){
    this->descricao=descricao;
}
inline Descricao imovel::getDescricao() const{
    return descricao;
}
inline void imovel::setEndereço(const Endereço &endereço){
    this->endereço=endereço;
}
inline Endereço imovel::getEndereço() const{
    return endereço;
}
inline void imovel::setData_inicial(const Data_inicial &data_inicial){
    this->data_inicial=data_inicial;
}
inline Data_inicial imovel::getData_inicial() const{
    return data_inicial;
}
inline void imovel::setData_final(const Data_final &data_final){
    this->data_final=data_final;
}
inline Data_final imovel::getData_final() const{
    return data_final;
}
inline void imovel::setHospedes(const Hospedes &hospedes){
    this->hospedes=hospedes
}
inline Hospedes imovel::getHospedes() const{
    return hospedes;
}
inline void imovel::setValor(const Valor &valor){
    this->valor=valor
}
inline Valor imovel::getValor() const{
    return valor;
}
///
/// Regras de formato:
///
/// - Usu�rio contem Código,data inicial,data final, hóspedes, valor.
///
// Classe Usuario feita por Victor Hugo Mat: 190129794
class proposta{

    private:

        Codigo codigo;

        Data_inicial data_inicial;

        Data_final data_final;

        Hospedes hospedes;

        Valor valor;

    public:
    ///
    /// Armazena o código
    ///
    // Metodos do atributo código
        void setCodigo(const Codigo &codigo);
        Nome getCodigo() const;
    ///
    /// Armazena o data inicial
    ///
    // Metodos do atributo data inicial
        void setData_inicial(const Data_inicial &data_inicial);
        Nome getData_inicial() const;
    ///
    /// Armazena o data final
    ///
    // Metodos do atributo data final
        void setData_final(const Data_final &data_final);
        Nome getData_final() const;
    ///
    /// Armazena o hóspedes
    ///
    // Metodos do atributo hospedes
        void setHospede(const Hospedes &hospedes);
        Nome getHospedes() const;
    ///
    /// Armazena o valor
    ///
    // Metodos do atributo valor
        void setValor(const Valor &valor);
        Nome getValor() const;

}
inline void imovel::setCodigo(const Codigo &codigo){
    this->codigo=codigo;
}
inline Codigo imovel::getCodigo() const{
    return codigo;
}
inline void imovel::setData_inicial(const Data_inicial &data_inicial){
    this->data_inicial=data_inicial;
}
inline Data_inicial imovel::getData_inicial() const{
    return data_inicial;
}
inline void imovel::setData_final(const Data_final &data_final){
    this->data_final=data_final;
}
inline Data_final imovel::getData_final() const{
    return data_final;
}
nline void imovel::setHospedes(const Hospedes &hospedes){
    this->hospedes=hospedes
}
inline Hospedes imovel::getHospedes() const{
    return hospedes;
}
inline void imovel::setValor(const Valor &valor){
    this->valor=valor
}
inline Valor imovel::getValor() const{
    return valor;
}

#endif // ENTIDADES_H_INCLUDED
