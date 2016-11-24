#include <stdio.h>
#include <iostream>

using namespace std;

const int max_X = 10;
const int max_Y = 20;

auto Field = new char[max_X][max_Y];

void printField() {
	for(int x = 0; x < max_X; x++) {
		for(int y = 0; y < max_Y; y++) {
			cout << Field[x][y];
		} 
		cout << endl;
	}
}
void init() {
	for(int x = 0; x < max_X; x++) {
		for(int y = 0; y < max_Y; y++) {
			Field[x][y] = ' ';
		} 
	}
}

int main() {
	init();


	printField();


}
