#include <iostream>
#include <string>
#include <vector>
#include "usuario.h"

using namespace std;

int main() {

    vector<Usuario> cadastro;
    Usuario u;
    u.nome = "Walcker";

    cout << "Nome: " << u.Nome() << endl;
  
    return 0;
}