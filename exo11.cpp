#include <iostream>

using namespace std;

int main() {
    int nb_photos;
    double prix_total = 0;

    // Saisie du nombre de photocopies
    cout << "Entrez le nombre de photocopies effectuées : ";
    cin >> nb_photos;

    // Calcul du prix selon le tarif
    if (nb_photos <= 10) {
        prix_total = nb_photos * 0.25;
    } else if (nb_photos <= 30) {
        prix_total = 10 * 0.25 + (nb_photos - 10) * 0.20;
    } else {
        prix_total = 10 * 0.25 + 20 * 0.20 + (nb_photos - 30) * 0.10;
    }

    // Affichage du prix total
    cout << "Le coût total est : " << prix_total << " DH" << endl;

    return 0;
}
