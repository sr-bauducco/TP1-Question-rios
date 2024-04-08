#include <iostream>
#include <string>

using namespace std;

class Endereco {
private:
    string cidade;
    string estado;

public:
    // Construtor que recebe apenas a cidade
    Endereco(string cidade) {
        this->cidade = cidade;
        this->estado = ""; // Estado não fornecido, inicializa como vazio
    }

    // Construtor que recebe cidade e estado
    Endereco(string cidade, string estado) {
        this->cidade = cidade;
        this->estado = estado;
    }

    // Método para obter a cidade
    string getCidade() {
        return cidade;
    }

    // Método para obter o estado
    string getEstado() {
        return estado;
    }
};

int main(){

    string cidade, estado;

    cin >> cidade;

    cin >> estado;

    Endereco enderecoA(cidade);

    Endereco enderecoB(cidade, estado);

    cout << enderecoA.getCidade();

    cout << enderecoB.getCidade();

    cout << enderecoB.getEstado();

    return 0;

}
