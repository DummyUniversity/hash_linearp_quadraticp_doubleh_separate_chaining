#include <iostream>
#include <fstream>
#include "test.h"
using namespace std;

int main(int argc, char** argv)
{
	uint64_t duration = getMillisecondsSinceEpoch();

	cout << getMillisecondsSinceEpoch() << "\n";
	std::string filename = "google-10000-english-usa-no-swears-long.txt";
	ifstream myfile(filename);
	if (myfile.is_open())
	{
		std::string line;
		while (std::getline(myfile, line))
		{
			cout << line << "\n";
		}
	}
	else
	{
		cout << "Error opening input file.\n";
	}

	duration = getMillisecondsSinceEpoch() - duration;

	cout << "Duration = " << duration << " ms.\n";


	return 0;
}
