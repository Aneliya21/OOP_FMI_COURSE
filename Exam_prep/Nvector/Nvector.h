#include <iostream>
#include <fstream>

class Nvector {
	int* vector = nullptr;
	size_t size = 0;

	void copyFrom(const Nvector& other);
	void free();

public:
	Nvector(size_t size);
	Nvector(const Nvector& other);
	Nvector& operator=(const Nvector& other);
	~Nvector();

	Nvector& operator+=(const Nvector& other);
	Nvector& operator-=(const Nvector& other);

	Nvector& operator*=(size_t scalar);

	friend std::ostream& operator<<(std::ostream& os, const Nvector& vect);
	friend std::istream& operator>>(std::istream& is, Nvector& vect);

	int& operator[](size_t index);
	int operator[](size_t index) const;

};
Nvector operator*(const Nvector& vector, size_t scalar);
Nvector operator*(size_t scalar, const Nvector& vector);

Nvector operator+(const Nvector& lhs, const Nvector& rhs);
Nvector operator-(const Nvector& lhs, const Nvector& rhs);
