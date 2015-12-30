#include "LifePolicy.h"

LifePolicy::LifePolicy(std::string fn, std::string ln, int a, std::string dfn, std::string dln, float t)
: age(a)
, dependentFirstName(dfn)
, dependentLastName(dln)
, termCoverage(t)
{
	firstName = fn;
	lastName = ln;
}

float LifePolicy::getCommision()
{
	return termCoverage * factor;
}

std::ostream& operator << (std::ostream& out, const LifePolicy& rhs)
{
	out << "_____________________________________________________________" << std::endl;
	out << "Home Policy: " << std::endl;
	out << "Name: " << rhs.lastName << ", " << rhs.firstName << std::endl;
	out << "Term Life Coverage: " << rhs.termCoverage << std::endl;
	out << "_____________________________________________________________" << std:: endl;
}


