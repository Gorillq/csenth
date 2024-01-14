#include <iostream>
#include <string>
#include "linuxsupp.h"
#include "pstream.h"


void util(std::string warianto) {
	redi::ipstream in(warianto);
}

int main() {
	std::string sciezka, konto, domena;
	std::cout << "podaj sciezke do pliku" << std::endl;
	std::cout << "przyklad: C:\\Users\\Admin\\plik.zip" << std::endl;
	std::cin >> sciezka;
	std::cout << "nazwa" << std::endl;
	std::cin >> konto;
	std::cout << "domena" << std::endl;
	std::cin >> domena;
	linuxsupp klasa;
	std::string goryl = klasa.wariant(sciezka, konto, domena);
	util(goryl);
	return 0;
}
