#pragma once
#include "Text.h"
#include <string>
using namespace std;

class WorkWithFile
{
	Text objText;
public:
	WorkWithFile();
	WorkWithFile(string _text);
	void SaveToFile(const string& filename);
};

