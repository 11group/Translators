#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
#include <cstdio>
using namespace std;

class Static
{
	array <string, 7> key_words;
	array <string, 8> sgn_operat;
	array <string, 9> tabl_divider;
public:
	Static();
	~Static();
	int FindStr(string str);
	string FindNumb(int numb);
};

