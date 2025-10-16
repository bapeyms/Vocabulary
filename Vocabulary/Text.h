#pragma once
#include <string>
using namespace std;

class Text
{
	string text;
public:
	Text();
	Text(string _text);
	void PrintText();
	string GetText();
};

