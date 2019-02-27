//
//  Cleric.h
//  Lab-1-RPG
//
//  Created by Cam on 9/29/18.
//  Copyright © 2018 Koti. All rights reserved.
//

#ifndef Cleric_h
#define Cleric_h

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Fighter.h"

class Cleric : public Fighter {
public:
    Cleric();
    Cleric(string name, int maximumHP, int strength, int originalSpeed, int magic);
    int getDamage();
    void reset();
    void regenerate();
    bool useAbility();
    
protected:
    int maxMana;
    int currentMana;
private:
    
    
};

#endif /* Cleric_h */
