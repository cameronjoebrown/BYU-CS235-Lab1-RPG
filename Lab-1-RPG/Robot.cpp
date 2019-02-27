//
//  Robot.cpp
//  Lab-1-RPG
//
//  Created by Cam on 9/29/18.
//  Copyright © 2018 Koti. All rights reserved.
//

#include "Robot.h"
#include <math.h>

Robot::Robot() {
    
}
Robot::Robot(string theName, int maxHP, int power, int speed, int theMagic) {
    name = theName;
    maximumHP = maxHP;
    currentHP = maxHP;
    strength = power;
    originalSpeed = speed;
    currentSpeed = originalSpeed;
    magic = theMagic;
    maxEnergy = 2 * magic;
    currentEnergy = maxEnergy;
}

int Robot::getDamage(){
    damage = strength + extraDamage;
    extraDamage = 0;
    return damage;
}

void Robot::reset() {
    Fighter::reset();
    currentEnergy =  maxEnergy;
    extraDamage = 0;
}

bool Robot::useAbility() {
    if(ROBOT_ABILITY_COST <= currentEnergy){
        double temp = (double)((strength) * (pow((double)(currentEnergy/maxEnergy), 4)));
        extraDamage = temp;
        currentEnergy -= ROBOT_ABILITY_COST;
        return true;
    }
    else {
        return false;
    }
}

