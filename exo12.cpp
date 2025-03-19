#include <iostream>

using namespace std;

int main() {
    int age;

    // Saisie de l'âge
    cout << "Entrez l'âge de l'enfant : ";
    cin >> age;

    // Détermination de la catégorie
    if (age >= 6 && age <= 7) {
        cout << "Catégorie : Poussin" << endl;
    } else if (age >= 8 && age <= 9) {
        cout << "Catégorie : Pupille" << endl;
    } else if (age >= 10 && age <= 11) {
        cout << "Catégorie : Minime" << endl;
    } else if (age >= 12) {
        cout << "Catégorie : Cadet" << endl;
    } else {
        cout << "Âge hors catégorie" << endl;
    }

    return 0;
}
