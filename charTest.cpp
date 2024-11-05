#include <iostream>>
#include <string>
#include "Character.h"

using namespace std;

int main() {

    Character char1;

    char1.setName("Esteban");
    char1.setSpecies("Human");
    char1.setFaction("Imperial");
    char1.setKeywords("Rougue Trader, Imperial, Human");

    cout << "Character name: " << "\t" << char1.getName() << endl;
    cout << "Species: " << "\t" << char1.getSpecies() << endl;
    cout << "Faction:" << "\t" << char1.getFaction() << endl;
    cout << "Keywords: " << "\t" << char1.getKeywords() << endl;

    return 0;
}