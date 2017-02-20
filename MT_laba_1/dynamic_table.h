/*dynamic_table.h*/
#pragma once
#include "static_table.h"

namespace dynamic_table {
	//константы
	struct constanta {
		string value;
		int type;
	};

	class Const {
		vector <constanta> consts;
	public:
		Const();
		~Const();
		int SearchConst(constanta c);
		void AddConst(constanta c);
		constanta GetElem(int numb);
		void ChangeConst(int numb, constanta c);
	};

	//идентификаторы
	struct Identificator {
		string name;
		int type;
		int value;
	};

	class Identific {
		vector <Identificator> identif;
	public:
		Identific();
		~Identific();
		int SearchIdent(Identificator id);
		void AddIdent(Identificator id);
		Identificator GetElem(int numb);
		void ChangeIdent(int numb, Identificator id);
	};
}