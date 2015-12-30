#include "HomePolicy.h"

HomePolicy::HomePolicy(std::string fn, std::string ln, int sf, float d, float c , float l)
: squareFootage(sf)
, dwellingCoverage(d)
, contentsCoverage(c)
, liabilityCoverage(l)
{
	firstName = fn;
	lastName = ln;
}

float HomePolicy::getCommision()
{
	return (liabilityCoverage * liabilityFactor) + ((dwellingCoverage + contentsCoverage) * dwellingContentsFactor);
}

std::ostream& operator << (std::ostream& out, const HomePolicy& rhs)
{
	out << "_____________________________________________________________" << std::endl;
	out << "Home Policy: " << std::endl;
	out << "Name: " << rhs.lastName << ", " << rhs.firstName << std::endl;
	out << "Dwelling Coverage: " << rhs.dwellingCoverage << std::endl;
	out << "Liability Coverage: " << rhs.liabilityCoverage << std::endl;
	out << "Contents Coverage : " << rhs.contentsCoverage << std::endl;
	out << "_____________________________________________________________" << std:: endl;

}
