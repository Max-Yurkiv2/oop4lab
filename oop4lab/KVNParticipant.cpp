#include "KVNParticipant.h"
#include <sstream>

KVNParticipant::KVNParticipant(
    const std::string& n, int a, const std::string& u,
    const std::string& r, int exp,
    const std::string& team, int perf
)
    : Student(n, a, u), Actor(r, exp), teamName(team), performances(perf) {}

KVNParticipant::~KVNParticipant() {}

std::string KVNParticipant::toString() const {
    std::ostringstream ss;
    ss << Student::toString() << "\n"
        << Actor::toString() << "\n"
        << "KVN Participant: Team - " << teamName
        << ", Performances: " << performances;
    return ss.str();
}

void KVNParticipant::print(std::ostream& os) const {
    os << toString() << std::endl;
}
