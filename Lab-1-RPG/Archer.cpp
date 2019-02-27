//
//  Archer.cpp
//  Lab-1-RPG
//
//  Created by Cam on 9/29/18.
//  Copyright © 2018 Koti. All rights reserved.
//

#include "Archer.h"

Archer::Archer() {
    
}

Archer::Archer(string theName, int maxHP, int power, int speed, int theMagic) {
    name = theName;
    maximumHP = maxHP;
    currentHP = maxHP;
    strength = power;
    originalSpeed = speed;
    currentSpeed = originalSpeed;
    magic = theMagic;
}

int Archer::getDamage(){
    damage = currentSpeed;
    return damage;
}

void Archer::reset() {
    Fighter::reset();
    currentSpeed = originalSpeed;
}

bool Archer::useAbility() {
    currentSpeed += 1;
    return true;
}

