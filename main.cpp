#include <iostream>

using namespace std;

class Codigo {
private:
    int valor;

public:
    bool set(int novoValor) {
            valor = novoValor;
            return true;
    }

    int get() {
        return valor;
    }
};

int main() {
    Codigo codigo;
    int valor;

    cin >> valor;

       if(valor % 2 == 0 && codigo.set(valor) && codigo.get() == valor) {

          cout << "SUCESSO";

          return 0;

     }

     if(valor % 2 != 0 && codigo.set(valor) && codigo.get() != valor){

          cout << "SUCESSO";

          return 0;

     }

     cout << "FALHA";

     return 0;

}
