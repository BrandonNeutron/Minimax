#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main(){
	srand(time(0));

	int dumbIrwin[4] = {2, 4, 8, 16};
	int rando, size, position;
	int uno[1], due[2], tre[4], quatre[8];
	bool check = false;
	cout << "Enter the size you'd like to play (multiple of 2, up to 16): ";
	cin >> size;
	
	int * randNums = new int[size];

	for(int i = 0; i < 4; i++){
		if(dumbIrwin[i] == size){
			check = true;
			position = i + 1;
			break;
		}
	}
	if(!check){
		cout << "How dare you disobey me." << endl;
		return 0;
	}
	for (int i = 0; i < size; i++){
		rando = rand() % 10;
		randNums[i] = rando;
		cout << '|' << rando;
	}
	cout << '|';
	cout << endl;
	cout << randNums[5] << endl;
	

	delete randNums;

}
