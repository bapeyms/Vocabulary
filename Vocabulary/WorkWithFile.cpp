#include "WorkWithFile.h"
#include "Text.h"
#include <iostream>
#include <fstream>

void WorkWithFile::SaveToFile(const string& filename)
{
	ofstream file(filename, ios::trunc);
	if (file)
	{
		file << GetText();
		file << endl;
	}
	file.close();
	cout << "Text is added to the file!" << endl;
}
