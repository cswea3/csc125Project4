#ifndef AUTOPOLICY_H
#define AUTOPOLICY_H

#include "Policy.h"
#include <sstream>

class AutoPolicy : public Policy
{

private:

	std::string makeOfCar;

	std::string modelOfCar;	

	std::string vinNumber;

	float liabilityCoverage;

	float collisionCoverage;

	static const float factor = .3;

public:

	AutoPolicy(std::string, std::string, std::string, std::string, std::string, float, float);

	float getCommision();

	friend std::ostream& operator << (std::ostream&, const AutoPolicy&);
};

#endif // AUTOPOLICY_H
