/*static_table.h*/
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <string>
#include <vector>
#include <array>
using namespace std;

namespace static_table {
	//ключевые слова
	class KeyWords	{
		array <string, 9> key_words;
	public:
		KeyWords();
		~KeyWords();
		int FindWord(string word);
		string GetWord(int numb);
	};

	//знаки операций
	class SgnOperat	{
		array <string, 8> sgn_operat;
	public:
		SgnOperat();
		~SgnOperat();
		int FindSign(string sign);
		string GetSign(int numb);
	};

	//разделители
	class Separator	{
		array <char, 9> separator;
	public:
		Separator();
		~Separator();
		int FindSymbol(char symbol);
		char GetSymbol(int numb);
	};
}
