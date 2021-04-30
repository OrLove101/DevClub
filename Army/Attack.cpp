#include "Attack.hpp"
#include "Unit.hpp"

Attack::Attack(/*Health& health, State& state*/) {
    // this->state = state;
    // this->health = health;
    this->damage = 10;
}

Attack::~Attack() {}

void Attack::setDamage(int damage) {
    this->damage = damage;
}

int Attack::getDamage() const {
    return this->damage;
}

void Attack::attack(Unit& enemy, Unit& thisUnit) {
    enemy.getHealth().takeDamage(this->damage);

    std::cout << thisUnit.getState().isCounterAttackable() << std::endl;

    if ( enemy.getHealth().getHitPoints() != 0 && thisUnit.getState().isCounterAttackable() ) {
        enemy.getAttack().counterAttack(thisUnit);
    }
}

void Attack::counterAttack(Unit& enemy) {
    enemy.getHealth().takeDamage(this->damage/2);
}