#include "Item.hpp"

Item::Item(const std::string& name, Category* category) {
    this->name = name;
    this->lst = new std::list<Order*>();
    this->category = category;
    this->category->addItem(this);

    Item::globalId += 1;
    this->id = Item::globalId;
}

Item::~Item() {}

void Item::getOrdersList() {
    std::list<Order*>::iterator it;

    for ( it = this->lst->begin(); it != this->lst->end(); it++ ) {
        std::cout << *(*it) << std::endl;
    }
}

void Item::addOrder(Order* order) {
    this->lst->push_back(order);
}

const std::string& Item::getName() const {
    return this->name;
}

int Item::getId() {
    return this->id;
}

std::ostream& operator<<(std::ostream& out, const Item& item) {
    out << item.getName();

    return out;
}

int Item::globalId = 0;