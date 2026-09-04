#include "../src/funs.h"
#include <string>

int main(int argc, char *argv[]) {
	int inNum = 0;
	if (argc > 1) inNum = std::stoi(argv[1]);
	
	return !(inNum % 2) && isEven(inNum);
}
