#pragma once

namespace w1 {
	class CString {
		char* s_string;
	public:
		static const int MAX = 3;
		CString(const char* ui_str = nullptr);
		~CString();
		std::ostream& display(std::ostream&) const;
	};
	std::ostream& operator<<(std::ostream&, const CString&);
}