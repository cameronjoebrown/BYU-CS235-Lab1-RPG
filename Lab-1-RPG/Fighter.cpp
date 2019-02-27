//
//  Fighter.cpp
//  Lab-1-RPG
//
//  Created by Cam on 9/21/18.
//  Copyright © 2018 Koti. All rights reserved.
//

#include "Fighter.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string Fighter::getName() const {
    
    return name;
}
int Fighter::getMaximumHP() const {
    
    return maximumHP;
}
int Fighter::getCurrentHP() const {
    
    return currentHP;
}
int Fighter::getStrength() const {
    
    return strength;
}
int Fighter::getSpeed() const {
    
    return currentSpeed;
}
int Fighter::getMagic() const{
    
    return magic;
}
int Fighter::getDamage() {

    return damage;
}
void Fighter::takeDamage(int damage) {
    damage -= (currentSpeed/4);
    if(damage < 1) {
        damage = 1;
    }
    currentHP -= damage;
}
void Fighter::reset() {
    currentHP = maximumHP;
}
void Fighter::regenerate() {
    int regeneration = (strength / 6);
    if(regeneration < 1) {
        regeneration = 1;
    }
    currentHP += regeneration;
    if(currentHP > maximumHP){
        currentHP = maximumHP;
    }
}

