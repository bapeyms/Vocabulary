#include <iostream>
#include <string>
#include <fstream>
#include "WorkWithFile.h"
#include "Text.h"
using namespace std;

int main()
{
	Text obj("apple mirror cloud river apple river dream stone echo mirror train sun moon forest phone apple pen sun bool");
	obj.PrintText();
	ofstream file;
	obj.SaveToFile(file, &obj);
	


}