#pragma once
#include "seklos.h"

class sekluva : public seklos
{
private:
	double kaina;
public:
	sekluva() {};

	sekluva(int kiek, std::string rusis, double kain);

	//destructor
	~sekluva() {};

	//copy asignment operator
	sekluva& operator=(const sekluva& sekla) {
		seklos::operator=(sekla);
		kiekis = sekla.kiekis;
		seklos_rusis = sekla.seklos_rusis;
		kaina = sekla.kaina;
		return *this;
	}

	//copy constructor
	sekluva(const sekluva& s) : seklos(s), kaina(s.kaina)
	{
	}

	//move constructor
	sekluva(sekluva&& s) : kaina(s.kaina) 
	{
		s.kaina = 0;
	}

	//move asignment constructor
	sekluva& operator=(sekluva&& s)
	{
		if (this == &s) {
			return *this;
		}
		kaina = s.kaina;
		s.kaina = 0;
		return *this;
	}

	//getteriai
	const int& getKiekis() 
	{
		return kiekis;
	}

	const std::string& getSeklos_rusis() {
		return seklos_rusis;
	}

	const double& getKaina() {
		return kaina;
	}
	
	//setteriai
	void setKaina(const double& k) {
		kaina = k;
	}
};

