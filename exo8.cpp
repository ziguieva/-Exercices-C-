#include <iostream>

using namespace std;

int main() {
    int nombre;

    // Saisie de l'entier
    cout << "Entrez un entier : ";
    cin >> nombre;

    // Calcul de la valeur absolue
    if (nombre < 0) {
        nombre = -nombre;
    }

    // Affichage du résultat
    cout << "La valeur absolue est : " << nombre << endl;

    return 0;
}
