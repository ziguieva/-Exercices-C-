/*Exercice 3
Écrire  un programme en C++  qui  permet d'échanger le
 contenu de 2 entiers  A et B  saisis par l'utilisateur. et afficher  ces entiers  après l’échange. 
*/
#include <iostream>
using namespace std;

int main() {

    int A,B,temp; 
    cout << "Entrez la valeur de A :";// Saisir la valeur de A
    cout << "Entrez la valeur de B :"; // Saisir la vlauer de B
    cin >> A >> B;
    
    //Affichage avant l'échange 
    cout << "Avant l'affichage : A = " << A << ", B = " << B << endl;

    //Echnage des valeurs 
    temp = A; //stock la valeur de A dans temps
    A = B; //Affecte la valeur de B à A 
    B = temp; // Affecte la valeur stockée dans temp à B 

    cout << " Après échange : A " << A <<", B = " << B << endl;

    return 0;
}
