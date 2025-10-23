#include "Actor.h"

Actor::Actor(const std::string& r, int exp)
    : role(r), experience(exp) {}

Actor::~Actor() {}

std::string Actor::toString() const {
    std::ostringstream ss;
    ss << "Actor: Role - " << role << ", Experience: " << experience << " years";
    return ss.str();
}

void Actor::print(std::ostream& os) const {
    os << toString() << std::endl;
}