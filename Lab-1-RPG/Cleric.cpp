//
//  Cleric.cpp
//  Lab-1-RPG
//
//  Created by Cam on 9/29/18.
//  Copyright © 2018 Koti. All rights reserved.
//

#include "Cleric.h"

Cleric::Cleric() {
    
}
Cleric::Cleric(string theName, int maxHP, int power, int speed, int theMagic) {
    name = theName;
    maximumHP = maxHP;
    currentHP = maxHP;
    strength = power;
    originalSpeed = speed;
    currentSpeed = originalSpeed;
    magic = theMagic;
    maxMana = 5 * magic;
    currentMana = maxMana;
}

int Cleric::getDamage(){
    damage = magic;
    return damage;
}

void Cleric::reset() {
    Fighter::reset();
    currentMana =  maxMana;
}

void Cleric::regenerate() {
    if((magic / 5) >= 1){
        currentMana += (magic / 5);
    }
    else {
        currentMana += 1;
    }
    if(currentMana > maxMana) {
        currentMana = maxMana;
    }
}

bool Cleric::useAbility() {
    if(CLERIC_ABILITY_COST <= currentMana){
        currentMana -= CLERIC_ABILITY_COST;
        int moreLife = (magic / 3);
        if(moreLife < 1) {
            moreLife = 1;
        }
        currentHP += moreLife;
        if(currentHP > maximumHP){
            currentHP = maximumHP;
        }
        return true;
    }
    else {
        return false;
    }
}
