#include <iostream>

using namespace std;

int main() {
    double note;

    // Demande à l'utilisateur de saisir une note
    cout << "Entrez une note (comprise entre 0 et 20) : ";
    cin >> note;

    // Vérification que la note est bien dans l'intervalle valide
    if (note >= 0 && note <= 20) {
        if (note >= 10) {
            cout << "Validé" << endl;
        } else {
            cout << "Non validé" << endl;
        }
    } else {
        cout << "Erreur : La note doit être comprise entre 0 et 20." << endl;
    }

    return 0;
}
