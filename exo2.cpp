#include <iostream> // Inclusion de la bibliothèques pour les entrée et sorties 
using namespace std;// permet d'éviter d'écrire std:: devant chaque appel

int main() {
    int a,b; //Déclaration de 2 variables entières 

    //Affiche un message demandant à l'utilisateur d'entrer 2 nombres
    cout << "Entrez un nombre :";

    // Lit les deux nombres entrés par l'utilisateur et les stock dans 'a' et 'b'
    cin >> a >> b; 

    // Calcule du produit et affiche le résultat
    cout << "Le produit est : "<< a*b;

    return 0;
}