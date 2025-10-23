#ifndef KVN_PARTICIPANT_H
#define KVN_PARTICIPANT_H

#include "Student.h"
#include "Actor.h"

class KVNParticipant : public Student, public Actor {
private:
    std::string teamName;
    int performances;

public:
    KVNParticipant(
        const std::string& n = "",
        int a = 0,
        const std::string& u = "",
        const std::string& r = "",
        int exp = 0,
        const std::string& team = "",
        int perf = 0
    );

    virtual ~KVNParticipant();

    virtual std::string toString() const override;
    virtual void print(std::ostream& os) const override;
};

#endif
