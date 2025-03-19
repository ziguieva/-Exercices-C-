#include <iostream>

using namespace std;

int main() {
    int mois;
    string mois_nom[] = {"Janvier", "Février", "Mars", "Avril", "Mai", "Juin",
                         "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre"};

    // Saisie du numéro du mois
    cout << "Entrez le numéro du mois (1-12) : ";
    cin >> mois;

    // Affichage du mois correspondant
    if (mois >= 1 && mois <= 12) {
        cout << "Le mois est : " << mois_nom[mois - 1] << endl;
    } else {
        cout << "Numéro de mois invalide !" << endl;
    }

    return 0;
}
