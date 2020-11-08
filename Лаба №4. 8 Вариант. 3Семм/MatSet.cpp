#include "MatSet.h"

MatSet::MatSet()
{
	this->OurSet.clear();
	this->update_MathematicalNotation();
}

MatSet::MatSet(std::set<int>& InsertingSet)
{
	this->OurSet = InsertingSet;
	this->update_MathematicalNotation();
}

std::set<int>& MatSet::get_OurSet()
{
	return this->OurSet;
}

void MatSet::set_OurSet(std::set<int>& NewSet)
{
	this->OurSet = NewSet;
	this->update_MathematicalNotation();
}

MatSet& MatSet::operator+(int Right)
{
	this->OurSet.insert(Right);
	this->update_MathematicalNotation();
	return *this;
}

MatSet& MatSet::operator=(MatSet& Right)
{
	this->MathematicalNotation = Right.MathematicalNotation;
	this->OurSet = Right.OurSet;
	return *this;
}

void MatSet::rand_iput()
{
	int brake = rand() % 10 + 1;
	for (int i = 0; i < brake; i++) {
		this->OurSet.insert(rand() % 50 + 1);
	}
	this->update_MathematicalNotation();
}

void MatSet::update_MathematicalNotation()
{
	if (!this->OurSet.empty()) {
		this->MathematicalNotation = "{";
		for (auto It = this->OurSet.begin(); It != this->OurSet.end(); It++) {
			this->MathematicalNotation += std::to_string(*It) + ' ';
		}
		this->MathematicalNotation += "}";
	}
	else {
		this->MathematicalNotation = "{ES}";
	}
}

std::ostream& operator<<(std::ostream& OurStream, MatSet& OurObj)
{
	OurStream << OurObj.MathematicalNotation;
	return OurStream;
}

std::istream& operator>>(std::istream& OurStream, MatSet& OurObj)
{
	int input;
	std::cout << "Input the int number\n";
	OurStream >> input;
	OurObj.OurSet.insert(input);
	OurObj.update_MathematicalNotation();
	return OurStream;
}
