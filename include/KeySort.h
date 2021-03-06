#pragma once
#include <iostream>
#include <sstream>
#include <vector>

class KeySort
{
private:

	std::vector <std::vector <std::string>> CONTAINER;
	int hierarchy = 0, max_hierarchy = 0;
	std::string _endpoint;
	void recursion_sort(const std::vector <std::string> &str_group);
public:

	KeySort(const std::vector <std::string> &_str_group , const std::string &endpoint = "#");
	~KeySort();

	std::vector < std::vector <std::string> > Output();
	void DataCheck();
	std::string EndPoint() { return _endpoint; }
};

