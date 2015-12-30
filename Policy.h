#ifndef POLICY_H
#define POLICY_H

#include <string>

class Policy
{

protected:

	std::string firstName;

	std::string lastName;

	Policy() {}

	Policy(std::string f, std::string l) : firstName(f), lastName(l) {}

	virtual float getCommision() = 0;


};

#endif // POLICY_H
