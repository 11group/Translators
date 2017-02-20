/*static_table.cpp*/
#include "static_table.h"

namespace static_table {
	KeyWords::KeyWords()	{
		key_words[0] = "int";
		key_words[1] = "main";
		key_words[2] = "void";
		key_words[3] = "switch";
		key_words[4] = "case";
		key_words[5] = "break";
		key_words[6] = "default";
		key_words[7] = "if";
		key_words[8] = "else";
	}
	KeyWords::~KeyWords() {}

	int KeyWords::FindWord(string word)	{
		for (int i = 0; i < key_words.size(); i++)
			if (key_words[i] == word) return i;
			else return -1;
	}

	string KeyWords::GetWord(int numb)	{
		return key_words[numb];
	}

	SgnOperat::SgnOperat()	{
		sgn_operat[0] = "+";
		sgn_operat[1] = "-";
		sgn_operat[2] = "*";
		sgn_operat[3] = "=";
		sgn_operat[4] = "==";
		sgn_operat[5] = "!=";
		sgn_operat[6] = "<";
		sgn_operat[7] = ">";
	}
	SgnOperat::~SgnOperat() {}

	int SgnOperat::FindSign(string sign)	{
		for (int i = 0; i < sgn_operat.size(); i++)
			if (sgn_operat[i] == sign) return i;
			else return -1;
	}

	string SgnOperat::GetSign(int numb)	{
		return sgn_operat[numb];
	}

	Separator::Separator()	{
		separator[0] = ' ';
		separator[1] = '(';
		separator[2] = ')';
		separator[3] = '{';
		separator[4] = '}';
		separator[5] = ';';
		separator[6] = ':';
		separator[7] = '\t';
		separator[8] = '\n';
	}
	Separator::~Separator() {}

	int Separator::FindSymbol(char symbol)	{
		for (int i = 0; i < separator.size(); i++)
			if (separator[i] == symbol) return i;
			else return -1;
	}
	char Separator::GetSymbol(int numb)	{
		return separator[numb];
	}
}