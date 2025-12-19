#include <iostream>
using namespace std;
int main() {
  char choix;
  int nbrePlaces = 10;
  do {
    cout << "********* Evaluation *********** \n";
    cout << "1- Entree dans le parking \n";
    cout << "2 - Nombre de places disponibles \n";
    cout << "3 - Sortie du parking \n";
    cout << "4 - Quitter \n";
    cout << "********************************* \n";

    cout << "choisir une des options\n";
    cin >> choix;
    cout << "vous avez choisi: " << choix << endl;

  } while (choix != '4');

  return 0;
}