#include "../src/funs.h"
#include <string>

int main(int argc, char *argv[]) {
	int inNum = 0;
	if (argc > 1) inNum = std::stoi(argv[1]);
	bool even = (inNum % 2) == 0;
	bool isPassed = even == isEven(inNum);
	return (isPassed) ? 0 : 1;
}
