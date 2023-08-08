#include <iostream>
#include <assert.h>

int calculateColorCode(int i, int j)
{
	return i * 5 + j;
}

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << calculateColorCode(i,j) << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
	assert(calculateColorCode(0, 0) == 1);
    assert(result == 25);
    std::cout << "All is well (maybe!)\n";
    return 0;
}