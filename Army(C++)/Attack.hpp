#ifndef ATTACK_H
#define ATTACK_H

#include <iostream>
#include "Health.hpp"
#include "State.hpp"

class Unit;

class Attack {
protected:
    int damage;
public:
    Attack();
    ~Attack();

    void attack(Unit& enemy, Unit& thisUnit);
    void counterAttack(Unit& enemy, Unit& you);

    int getDamage() const;
    void setDamage(int damage);
};

#endif