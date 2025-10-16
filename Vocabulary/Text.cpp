#include "Text.h"
#include <iostream>

Text::Text()
{
	text = "";
}
Text::Text(string _text)
{
	text = _text;
}

void Text::PrintText()
{
	cout << "- TEXT -" << endl;
	cout << text;
	cout << endl;
}

string Text::GetText()
{
	return text;
}
