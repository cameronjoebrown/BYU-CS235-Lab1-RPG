//
//  Archer.h
//  Lab-1-RPG
//
//  Created by Cam on 9/29/18.
//  Copyright © 2018 Koti. All rights reserved.
//

#ifndef Archer_h
#define Archer_h

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Fighter.h"

class Archer : public Fighter {
public:
    Archer();
    Archer(string theName, int maxHP, int power, int speed, int theMagic);
    int getDamage();
    void reset();
    bool useAbility();
protected:
    
    
private:
    
    
};

#endif /* Archer_h */
