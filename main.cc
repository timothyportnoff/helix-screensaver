#include <string>
#include <iostream>
#include <cstring>
#include <ctime>
#include <unistd.h>
using namespace std;

//Our helix to loop. Has 10 lines.
const char* helix[]  = {
	"6098)o%:::%o(860",
	"098)o%:::%o(8609",
	" 6o%:%o(86098)  ",
	"  (86098)o      ",
	"6098)o%::%o9    ",
	"098)o%::::::%o9 ",
	" 6o%::::::%o(860",
	"    6o%::%o(8609",
	"      o(86098)  ",
	"  (86098)o%:o99 "
};

int main(int argc, char *argv[]) {
	size_t size = 10;
	while (true) {
		for (size_t i = 0; i < size; i++) {
			const char* strand = helix[i];
			cout << strand << endl;
			usleep(500'000);
		}
	}
	return 0;
}

