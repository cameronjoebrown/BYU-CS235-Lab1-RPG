//
//  Robot.h
//  Lab-1-RPG
//
//  Created by Cam on 9/29/18.
//  Copyright © 2018 Koti. All rights reserved.
//

#ifndef Robot_h
#define Robot_h

#include <stdio.h>
#include <iostream>
#include "Fighter.h"

using namespace std;

class Robot : public Fighter {
public:
    Robot();
    Robot(string theName, int maxHP, int power, int speed, int theMagic);
    int getDamage();
    void reset();
    bool useAbility();
protected:
    int currentEnergy;
    int maxEnergy;
    int extraDamage = 0;
private:
    
    
};


#endif /* Robot_h */
