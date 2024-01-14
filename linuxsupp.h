#include <iostream>
#include <string>
//#include <iterator>
using namespace std;

//todo
//1. " maker

class linuxsupp {
public:
	std::string wariant(string a,string b,string c) {
		std::string full;
		std::string string1 = "scp ";
		std::string string2 = " ";
		std::string string3 =  "@";
		std::string string4 = ":/home/";
		std::string string5 = "/";
		full.append(string1);
		full.append(a);
		full.append(string2);
		full.append(b);
		full.append(string3);
		full.append(c);
		full.append(string4);
		full.append(b);
		full.append(string5);
		return full;
	}
};
