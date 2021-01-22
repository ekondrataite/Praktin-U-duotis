#pragma once
#include "biblioteka.h"

class seklos
{
public:
	virtual ~seklos() = 0;

	virtual const int& getKiekis() = 0;
	virtual const std::string& getSeklos_rusis() = 0;

	void setKiekis(const int& k)
	{
		kiekis = k;
	}

	void setSeklos_rusis(const std::string& rusis) 
	{
		seklos_rusis = rusis;
	}

protected:
	int kiekis;
	std::string seklos_rusis;

	seklos() {};

	seklos(int k, std::string rusis);

	seklos& operator=(const seklos& s) {
		kiekis = s.kiekis;
		seklos_rusis = s.seklos_rusis;
		return *this;
	}
};

