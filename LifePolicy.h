#ifndef LIFEPOLICY_H
#define LIFEPOLICY_H

#include "Policy.h"
#include <sstream>

class LifePolicy : public Policy
{

private:

	int age;

	std::string dependentFirstName;

	std::string dependentLastName;

	float termCoverage;

	static const float factor = .2;

public:

	LifePolicy(std::string, std::string, int, std::string, std::string, float);

	float getCommision();

	friend std::ostream& operator << (std::ostream&, const LifePolicy&);
};

#endif // LIFEPOLICY_H
