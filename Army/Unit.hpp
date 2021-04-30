#ifndef UNIT_H
#define UNIT_H 

#include <iostream>
#include "Health.hpp"
#include "State.hpp"

class Attack;

class Unit {
    protected:
        std::string name;
    public:
        Health* health;
        Attack* unitAttack;
        State* state;

        Unit(const std::string& name);
        virtual ~Unit();

        Health& getHealth() const;
        Attack& getAttack() const;
        State& getState() const;

        const std::string& getName() const;

        virtual void takeDamage(int dmg) = 0;
        virtual void attack(Unit& enemy) = 0;
        virtual void counterAttack(Unit& enemy) = 0;
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif