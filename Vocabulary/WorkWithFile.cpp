#include "WorkWithFile.h"
#include <iostream>
#include <fstream>

WorkWithFile::WorkWithFile() :objText("") {}

WorkWithFile::WorkWithFile(string _text) :objText(_text) {}

void WorkWithFile::SaveToFile(const string& filename)
{
	ofstream file(filename, ios::trunc);
	if (file)
	{
		file << objText.GetText();
		file << endl;
	}
	file.close();
	cout << "Text is added to the file!" << endl;
}
