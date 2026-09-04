#include "../src/funs.h"

int main() {
	bool isCorrect = false;
	isCorrect = isEven(6) && !isEven(3) && isEven(0) && isEven(-2) && !isEven(-3);
	return (isCorrect) ? 0 : 1;
}
