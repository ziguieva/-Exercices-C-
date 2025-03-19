/*Exercice 4                                                                                      
Écrire un un programme en C++ qui  permet d'afficher si 
un nombre  entier saisi au  clavier est pair ou impair. 
*/

#include <iostream> // Inclusion de la bibliothèque pour les entrées/sorties

using namespace std; // Utilisation de l'espace de noms std pour simplifier l'écriture de cout et cin

int main() {
    int nombre; // Déclaration de la variable qui stockera le nombre saisi

    // Demande à l'utilisateur de saisir un nombre entier
    cout << "Entrez un nombre entier : ";
    cin >> nombre; // Lecture du nombre saisi

    // Vérification de la parité du nombre
    // Un nombre est pair si le reste de la division par 2 est égal à 0
    if (nombre % 2 == 0) {
        // Si le nombre est pair, on l'affiche
        cout << nombre << " est pair." << endl;
    } else {
        // Sinon, il est impair et on l'affiche
        cout << nombre << " est impair." << endl;
    }

    return 0; // Fin du programme
}
