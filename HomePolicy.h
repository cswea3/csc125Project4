#ifndef HOMEPOLICY_H
#define HOMEPOLICY_H

#include "Policy.h"
#include <sstream>

class HomePolicy : public Policy
{

private:

	int squareFootage;

	float dwellingCoverage;

	float contentsCoverage;

	float liabilityCoverage;

	static const float liabilityFactor = .3;

	static const float dwellingContentsFactor = .2;

public:


	HomePolicy(std::string, std::string, int, float, float, float);

	float getCommision();

	friend std::ostream& operator << (std::ostream&, const HomePolicy&);

};

#endif // HOMEPOLICY_H
