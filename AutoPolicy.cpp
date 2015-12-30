#include "AutoPolicy.h"

AutoPolicy::AutoPolicy(std::string f, std::string last, std::string ma, std::string mo, std::string v, float l, float c)
: makeOfCar(ma)
, modelOfCar(mo)
, vinNumber(v)
, liabilityCoverage(l)
, collisionCoverage(c)
{
	firstName = f;
	lastName = last;
}

float AutoPolicy::getCommision()
{
	(liabilityCoverage * collisionCoverage) * factor;
}

std::ostream& operator << (std::ostream& out , const AutoPolicy& rhs)
{
	out << "_____________________________________________________________" << std::endl;
	out << "Auto Policy: " << std::endl;
	out << "Name: " << rhs.lastName << ", " << rhs.firstName << std::endl;
	out << "Vehicle: " << rhs.makeOfCar << " " << rhs.modelOfCar << std::endl;
	out << "VIN: " << rhs.vinNumber << std::endl;
	out << "Liability Coverage: " << rhs.liabilityCoverage << std::endl;
	out << "Collision Coverage : " << rhs.collisionCoverage << std::endl;
	out << "_____________________________________________________________" << std:: endl;

	return out;
}
