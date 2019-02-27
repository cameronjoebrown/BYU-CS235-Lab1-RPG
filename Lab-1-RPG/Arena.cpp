//
//  Arena.cpp
//  Lab-1-RPG
//
//  Created by Cam on 9/21/18.
//  Copyright © 2018 Koti. All rights reserved.
//

#include "Arena.h"
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

Arena::Arena() {
    
    
}

bool Arena::addFighter(string info) {
    string name, type;
    int maximumHP, strength, originalSpeed, magic;
    stringstream inSS(info);
    inSS >> name;
    inSS >> type;
    inSS >> maximumHP;
    inSS >> strength;
    inSS >> originalSpeed;
    inSS >> magic;
    if (inSS.fail()){
        return false;
    }
    if (!inSS.eof()){
        return false;
    }
    for (int i = 0; i < arenaFighters.size(); i++){
        string newName = arenaFighters[i]->getName();
        if (newName == name){
            return false;
        }
    }
    if(type == "C") {
        Cleric* newCleric = new Cleric(name, maximumHP, strength, originalSpeed, magic);
        arenaFighters.push_back(newCleric);
        return true;
    }
    if(type == "R") {
        Robot* newRobot = new Robot(name, maximumHP, strength, originalSpeed, magic);
        arenaFighters.push_back(newRobot);
        return true;
    }
    if(type == "A") {
        Archer* newArcher = new Archer(name, maximumHP, strength, originalSpeed, magic);
        arenaFighters.push_back(newArcher);
        return true;
    }
    else {
        return false;
    }
    
    
}

bool Arena::removeFighter(string name) {
    vector<FighterInterface*>::iterator i = (find_if(arenaFighters.begin(), arenaFighters.end(), [&name](FighterInterface* p) {return (p->getName()) == name; }));
    if(i != arenaFighters.end()){
        arenaFighters.erase(i);
        return true;
    }
    else {
        return false;
    }
}

FighterInterface* Arena::getFighter(string name) {
    vector<FighterInterface*>::iterator i = (find_if(arenaFighters.begin(), arenaFighters.end(), [&name](FighterInterface* p) {return (p->getName()) == name; }));
    if(i != arenaFighters.end()){
        return *i;
    }
    else {
        return NULL;
    }
}

int Arena::getSize() const {
    return arenaFighters.size();
}
