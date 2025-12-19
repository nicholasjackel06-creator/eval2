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
    cout << "vous avez choisi l'option " << choix << endl;
    switch(choix){
        case('1'):
        cout << "on decremente le nombre de places de parking restantes (nbrePlaces--) \n";
        break;
        case('2'):
        cout << "on affiche le nombre de places restantes\n";
        break;
        case('3'):
        cout << "on incremente le nombre de places de parking restantes\n";
        break;
        case('4'):
        cout << "Au revoir\n";
        break;
        
    }

  } while (choix != '4');

  return 0;
}