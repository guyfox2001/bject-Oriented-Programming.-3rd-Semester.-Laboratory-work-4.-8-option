#pragma once
#include <iostream>
#include <set>
#include <string>
#include <iterator>
#ifndef MATSET_H
#define MATSET_H
class MatSet
{
public:
	MatSet();
	MatSet(std::set<int>& InsertingSet);
	std::set<int>& get_OurSet();
	void set_OurSet(std::set<int>& NewSet);
	friend std::ostream& operator<<(std::ostream& OurStream, MatSet& OurObj);
	friend std::istream& operator>>(std::istream& OurStream, MatSet& OurObj);
	MatSet& operator+(int Right);
	MatSet& operator=(MatSet& Right);
	void rand_iput();
private:
	std::set<int> OurSet;
	std::string MathematicalNotation;
	int inp;
	void update_MathematicalNotation();

};
#endif // !MATSET_H

