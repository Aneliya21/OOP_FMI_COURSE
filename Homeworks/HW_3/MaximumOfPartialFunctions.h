#pragma once
#include "PartialFunctionOperation.h"

class MaximumOfPartialFunctions : public PartialFunction {

public:
	MaximumOfPartialFunctions(PartialFunctionOperation& functions);

	PartialFunction* clone() const override;
	bool isDefinedAtPoint(int32_t atPoint) const override;
	Pair<bool, int32_t> evaluate(int32_t x) const override;

private:
	PartialFunctionOperation functions;
};

