//
//  Arena.h
//  Lab-1-RPG
//
//  Created by Cam on 9/21/18.
//  Copyright © 2018 Koti. All rights reserved.
//

#ifndef Arena_h
#define Arena_h

#include <stdio.h>
#include <iostream>
#include <string>
#include "ArenaInterface.h"
#include "Fighter.h"
#include "Cleric.h"
#include "Archer.h"
#include "Robot.h"
#include <vector>

using namespace std;

class Arena : public ArenaInterface {
public:
    Arena();
    bool addFighter(string info);
    bool removeFighter(string name);
    FighterInterface* getFighter(string name);
    int getSize() const;
    
    
protected:
    
    
private:
    vector<FighterInterface*> arenaFighters;
    
    
};
#endif /* Arena_h */
