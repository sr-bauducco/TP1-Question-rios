#include <iostream>

using namespace std;

class Codigo {

private:
    int valor;

public:
    void set(int novoValor) {
        valor = novoValor;
    }

    int get() {
        return valor;
    }
};

int main() {
    Codigo codigo;
    int valor;

    cin >> valor;

    codigo.set(valor);

    cout << codigo.get() << endl;

    return 0;
}
