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
        this->estado = ""; // Estado n�o fornecido, inicializa como vazio
    }

    // Construtor que recebe cidade e estado
    Endereco(string cidade, string estado) {
        this->cidade = cidade;
        this->estado = estado;
    }

    // M�todo para obter a cidade
    string getCidade() {
        return cidade;
    }

    // M�todo para obter o estado
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
