#pragma once

#include "Computer.h"

class Laptop : public Computer {

public:
	void print_computer_type() const override;
	void print_perifer_devices() const override;
};

