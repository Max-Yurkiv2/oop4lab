#include <iostream>
#include <fstream>
#include <vector>
#include "Student.h"
#include "Actor.h"
#include "KVNParticipant.h"

int main() {
    Student s("Ivan", 19, "KNU");
    Actor a("Gamlet", 3);
    KVNParticipant kvn("Olya", 20, "LNU", "Comic", 2, "Cheerful", 5);

    std::cout << "Consol:" << std::endl;
    s.print(std::cout);
    a.print(std::cout);
    kvn.print(std::cout);

    std::ofstream fout("output.txt");
    if (fout.is_open()) {
        fout << "info" << std::endl;
        s.print(fout);
        a.print(fout);
        kvn.print(fout);
        fout.close();
        std::cout << "\nSaved info\n";
    }
    else {
        std::cerr << "Cant open the file" << std::endl;
    }

    return 0;
}