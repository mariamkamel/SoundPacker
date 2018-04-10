#pragma once
#include <Windows.h>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

bool directoryExists(string directory);
void createFolder(string name, string path);
void copyFile(string name, string origin, string destination);
void generateMetaData(vector<Folder> folders, string destination);
