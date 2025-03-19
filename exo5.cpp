#include <iostream> // Inclusion de la bibliothèque pour les entrées/sorties

using namespace std; // Utilisation de l'espace de noms std pour simplifier l'écriture de cout et cin

int main() {
    double note; // Variable pour stocker la note saisie par l'utilisateur

    // Demande à l'utilisateur de saisir une note entre 0 et 20
    cout << "Entrez une note (entre 0 et 20) : ";
    cin >> note; // Lecture de la note saisie par l'utilisateur

    // Vérification optionnelle : s'assurer que la note est comprise entre 0 et 20
    if (note < 0 || note > 20) {
        cout << "Note invalide. Veuillez entrer une note entre 0 et 20." << endl;
        return 1; // Fin du programme avec un code d'erreur
    }

    // Évaluation de la note :
    // Si la note est supérieure à 10, l'élève est "Validé"
    // Sinon, il est "Non validé"
    if (note > 10) {
        cout << "Validé" << endl; // Affiche "Validé" si la condition est vraie
    } else {
        cout << "Non validé" << endl; // Affiche "Non validé" sinon
    }

    return 0; // Fin du programme avec succès
}
