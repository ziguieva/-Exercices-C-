#include <iostream>

using namespace std;

int main() {
    double m, n;

    // Saisie des deux nombres
    cout << "Entrez le premier nombre (m) : ";
    cin >> m;
    cout << "Entrez le deuxième nombre (n) : ";
    cin >> n;

    // Vérification du signe du produit
    if (m * n > 0) {
        cout << "Le produit est positif." << endl;
    } else if (m * n < 0) {
        cout << "Le produit est négatif." << endl;
    } else {
        cout << "Le produit est nul." << endl;
    }

    return 0;
}
