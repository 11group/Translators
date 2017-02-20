/*dynamic_table.cpp*/
#include "dynamic_table.h"

namespace dynamic_table {
	Const::Const() {}
	Const::~Const() {}

	int Const::SearchConst(constanta c)	{
		for (int i = 0; i < consts.size(); i++)
			if (consts[i].type == c.type && consts[i].value == c.value) return i;
		return -1;
	}

	void Const::AddConst(constanta c)	{
		consts.push_back(c);
	}

	constanta Const::GetElem(int numb)	{
		return consts[numb];
	}

	void Const::ChangeConst(int numb, constanta c)	{
		consts[numb] = c;
	}

	Identific::Identific() {}
	Identific::~Identific() {}

	int Identific::SearchIdent(Identificator id)	{
		for (int i = 0; i < identif.size(); i++)
			if (identif[i].name == id.name && identif[i].type == id.type
				&& identif[i].value == id.value) return i;
		return -1;
	}

	void Identific::AddIdent(Identificator id)	{
		identif.push_back(id);
	}

	Identificator Identific::GetElem(int numb)	{
		return identif[numb];
	}

	void Identific::ChangeIdent(int numb, Identificator id)	{
		identif[numb] = id;
	}
}