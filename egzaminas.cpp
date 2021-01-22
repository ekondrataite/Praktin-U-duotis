// egzaminas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "seklos.h"
#include "sekluva.h"
#include "biblioteka.h"

int main()
{
    sekluva produktas1(500, "Morkos", 4.5);
    sekluva produktas2(250, "Zirniai", 2.75);
    sekluva produktas3(50, "Arbuzai", 7.89);
    sekluva produktas4(376, "Pomidorai", 1.4);
    sekluva produktas5(156, "Kopustai", 1.5);

    std::cout << "Imones 'Sekluva' produkcija:" << std::endl;
    std::cout << std::endl;

    std::cout << std::left << std::setw(20) << "Produkto kiekis" << std::setw(20) << "Seklos rusis" << std::setw(20) << "Kaina" << std::endl;

    std::cout << std::left << std::setw(20) << produktas1.getKiekis() << std::setw(20) << produktas1.getSeklos_rusis() << std::setw(20) << produktas1.getKaina() << std::endl;
    std::cout << std::left << std::setw(20) << produktas2.getKiekis() << std::setw(20) << produktas2.getSeklos_rusis() << std::setw(20) << produktas2.getKaina() << std::endl;
    std::cout << std::left << std::setw(20) << produktas3.getKiekis() << std::setw(20) << produktas3.getSeklos_rusis() << std::setw(20) << produktas3.getKaina() << std::endl;
    std::cout << std::left << std::setw(20) << produktas4.getKiekis() << std::setw(20) << produktas4.getSeklos_rusis() << std::setw(20) << produktas4.getKaina() << std::endl;
    std::cout << std::left << std::setw(20) << produktas5.getKiekis() << std::setw(20) << produktas5.getSeklos_rusis() << std::setw(20) << produktas5.getKaina() << std::endl;
}
