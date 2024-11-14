#include <iostream>
#include <cstring>
#include <string>
#include "class.h"


int main() {
    Tripulacao trip(1, "Carlos", "11(11) 11111-1111", "Piloto");
    Passageiro pass(2, "Ana", "22(22) 22222-2222", "Rua Exemplo, 123");

    Voo voo(1234, "12/12/2024", "GRU", "JFK", 5678);
    voo.tripulacao = trip;

    cout << "Voo de " << voo.origem << " para " << voo.destino << " no dia " << voo.data << endl;
    cout << "Tripulante: " << voo.tripulacao.nome << ", Cargo: " << voo.tripulacao.cargo << endl;

    return 0;
}