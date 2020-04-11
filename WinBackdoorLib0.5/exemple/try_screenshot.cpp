#include "screenshot.h"
#include <iostream>
//compile : g++ screenshot.cpp try_screenshot.cpp -o screenshot.exe -s -ffunction-sections -fdata-sections -Wno-write-strings -fno-exceptions -fmerge-all-constants -static-libstdc++ -static-libgcc -std=c++11 -lole32 -loleaut32 -lgdi32 -luuid

using namespace std;

int main()
{
	screenshot(1920,1080,(LPCSTR)"screen.png");
	return 0;
}