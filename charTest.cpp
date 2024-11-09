#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

int main() {

    int choice = 0;
    Character char1;

    while(choice > -1){

        char1.setName("Esteban");
        char1.setSpecies("Human");
        char1.setFaction("Imperial");
        char1.setKeywords("Rougue Trader, Imperial, Human");
        

        cout << "Character name: " << "\t" << char1.getName() << endl;
        cout << "Species: " << "\t\t" << char1.getSpecies() << endl;
        cout << "Faction:" << "\t\t" << char1.getFaction() << endl;
        cout << "Keywords: " << "\t\t" << char1.getKeywords() << endl;
        cout << "Inventory: " << endl;
        cout << "/tWepoans:" << "\t";
        char1.displayInventory();

        cout << "\n\n To quit press -1 or any other number to continue" << endl;
        cin >> choice;

    }

    return 0;
}