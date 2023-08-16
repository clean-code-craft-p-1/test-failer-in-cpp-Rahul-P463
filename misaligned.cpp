#include <iostream>
#include <assert.h>

int calculateColorCode(int i, int j)
{
	return i * 5 + j + 1;
}

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int majorColorIndex = 0, minorColorIndex = 0;
    for(majorColorIndex = 0; majorColorIndex < 5; majorColorIndex++) {
        for(minorColorIndex = 0; minorColorIndex < 5; minorColorIndex++) {
            std::cout << calculateColorCode(majorColorIndex,minorColorIndex) << " | " << majorColor[majorColorIndex] << " | " << minorColor[majorColorIndex] << "\n";
        }
    }
    return majorColorIndex * minorColorIndex;
}

int main() {
    int result = printColorMap();
    assert(calculateColorCode(0, 0) == 1);
    assert(result == 25);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
