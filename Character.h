#pragma once

#include <string>

class Character {
    private:

    //General Info
    std::string name;
    std::string species;
    std::string faction;
    std::string keywords;

    //attributes
    int strength;
    int troughness;
    

    int willpower;
    int intelligence;
    int fellowship;

    //skills
    int athletics;
    int awerness;
    int ballisticSkill;
    int cunning;
    int deception;
    int insight;
    int intimidation;
    int investigation;
    int leadership;
    int medicae;
    int persuasion;
    int pilot;
    int psychicMastery;
    int scholar;
    int stealth;
    int survival;
    int tech;
    int weaponSkill;

    //inventories

    //talents & abilities

    //traumatic injuries

    //memorable injuries

    //mutation

    //corruptiom

    public:

    //Constructor
    Character();

    //Getters
    std::string getName(){
        return name;
    }

    std::string getSpecies(){
        return species;
    }

    std::string getFaction(){
        return faction;
    }

    std::string getKeywords(){
        return keywords;
    }

    //setters
    void setName(std::string input){
        name = input;
    }

    void setSpecies(std::string input){
        species = input;
    }

    void setFaction(std::string input){
        faction = input;
    }

    void setKeywords(std::string input){
        keywords = input;
    }

};