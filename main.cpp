#include <iostream>
#include <string>
#include <direct.h>
//#include <sys/stat.h>
//#include <filesystem>


using namespace std;
//namespace fs = std::filesystem;


int main()
{
	//method 1 - failed
	//string defaulPath = "D:\\CFDIO\\ResultLib";
	//string folder = defaulPath + "\\test";
	//string command = "mkdir -p" + folder;
	//system(command.c_str());

	//method 2 - failed
	//string defaulPath = "D:\\CFDIO\\ResultLib";
	//string folder = defaulPath + "\\test";
	//mkdir(folder.c_str());
	//if (0 != _waccess(folder.c_str(), 0))
	//{
	//	mkdir(folder.c_str());
	//}

	//method 3 - success!
	string defaulPath = "D:\\CFDIO\\ResultLib";
	string folder = defaulPath + "\\test";
	cout << _mkdir(folder.c_str()) << endl;
	return 0;
}

