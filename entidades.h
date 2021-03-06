#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

///
/// Padrão para representação do usuário
///
/// Regras de formato:
///
/// - Usuário contem nome, email, senha e telefone.
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


#endif // ENTIDADES_H_INCLUDED
