#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.hpp"

class Soldier: public Unit {
    public:
        Soldier(const std::string& name);
        ~Soldier();

        void takeDamage(int dmg);
        void attack(Unit& enemy);
        void counterAttack(Unit& enemy);
        void transform(Unit& enemy);
        void transform();
};

#endif