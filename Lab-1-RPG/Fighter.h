//
//  Fighter.h
//  Lab-1-RPG
//
//  Created by Cam on 9/21/18.
//  Copyright © 2018 Koti. All rights reserved.
//

#ifndef Fighter_h
#define Fighter_h

#include <stdio.h>
#include <iostream>
#include <string>
#include "FighterInterface.h"

using namespace std;

class Fighter : public FighterInterface {
public:
    string getName() const;
    int getMaximumHP() const;
    int getCurrentHP() const;
    int getStrength() const;
    int getSpeed() const;
    int getMagic() const;
    virtual int getDamage();
    void takeDamage(int damage);
    virtual void reset();
    virtual void regenerate();
protected:
    string name;
    int maximumHP;
    int currentHP;
    int strength;
    int originalSpeed;
    int currentSpeed;
    int magic;
    int damage;
    
private:
    
    
};

#endif /* Fighter_h */
