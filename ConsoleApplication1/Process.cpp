#include <ostream>
#include "Process.h"
#include "CString.h"


void process(const char* ui_str, std::ostream& os)
{
	w1::CString strObj(ui_str);
	os << strObj << std::endl;
}