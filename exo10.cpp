#include <iostream>

using namespace std;

int main() {
    double prix_HT, prix_TTC, reduction = 0, TVA = 0.20;

    // Saisie du prix total HT
    cout << "Entrez le prix total HT : ";
    cin >> prix_HT;

    // Appliquer une réduction de 15% si le montant HT > 200
    if (prix_HT > 200) {
        reduction = prix_HT * 0.15;
    }

    // Calcul du prix TTC
    prix_TTC = (prix_HT - reduction) * (1 + TVA);

    // Affichage du prix TTC
    cout << "Le montant TTC est : " << prix_TTC << " DH" << endl;

    return 0;
}
