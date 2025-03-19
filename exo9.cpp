#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    double moyenne;

    // Saisie des trois entiers
    cout << "Entrez le premier entier : ";
    cin >> a;
    cout << "Entrez le deuxième entier : ";
    cin >> b;
    cout << "Entrez le troisième entier : ";
    cin >> c;

    // Calcul de la moyenne
    moyenne = (a + b + c) / 3.0;

    // Affichage du résultat
    cout << "La moyenne des trois nombres est : " << moyenne << endl;

    return 0;
}
