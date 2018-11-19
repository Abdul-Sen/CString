#include <cstring>
#include <ostream>
#include "CString.h"
#pragma warning(disable : 4996)// disables warning about not using secure version of strncpy

int STORED = w1::CString::MAX;

namespace w1 {

	//1-Arg constructor
	CString::CString(const char* ui_str)
	{
		if (ui_str != nullptr || ui_str[0] != '\0')
		{
			this->s_string = new char[MAX +1];// +1 for the null byte
			strncpy(s_string, ui_str, MAX);
			s_string[MAX] = '\0';
		}
		else { s_string = nullptr; }
	}

	//returns stored object string
	std::ostream& CString::display(std::ostream& os) const
	{
		os << s_string;
		return os;
	}

	//overloaded extraction operator 
	std::ostream & operator<<(std::ostream & os, const CString & str)
	{
		static int i = 0;
		os << i << ": ";
		str.display(os);
		i++;
		return os;
	}

	//destructor
	CString::~CString() {
		delete[] s_string;
	}
}