#include <iostream>
#include <string>
using namespace std;

int main() {
    int edad;
    string numerosImpares = "";
    string numerosPares = "";
    cout << "Ingrese edad: ";
    cin >> edad;

    for (int i = 1; i <= edad; i++) {
        if (i % 2 == 0) {
            if (numerosPares == "") {
                numerosPares += to_string(i);
            } else {
                numerosPares += ", " + to_string(i);
            }
        } else {
            if (numerosImpares == "") {
                numerosImpares += to_string(i);
            } else {
                numerosImpares += ", " + to_string(i);
            }
        }
    }

    cout << "Los años pares han sido: " << endl << numerosPares << endl;
    cout << "Los años impares han sido: " << endl << numerosImpares << endl;

    return 0;
}
