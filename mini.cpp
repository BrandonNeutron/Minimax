#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int* unoFoo(int arr[]);
int* dueFoo(int arr[4]);
//int* treFoo(int arr[8]);
//int* quattroFoo(int arr[16]);

int main(){
	srand(time(0));

	int dumbIrwin[4] = {2, 4, 8, 16};
	int rando, size, position;
	int uno[1], due[2], tre[4], quattro[8];
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
//	cout << randNums[5] << endl;
	int* test = dueFoo(randNums);
	cout << test[0] << ' ' << test[1] << endl;
	delete randNums;

}


//I can almost certainly turn this into one function
int* unoFoo(int arr[]){
	int irwin;
	if(arr[0] >= arr[1]){
		arr[0];
		return irwin;
	}
	irwin[0] = arr[1];
	return irwin;
}

int* dueFoo(int arr[4]){
	int irwin[2];
	for(int i = 0; i < 4; i = i + 2){
		if(arr[i] >= arr[i+1]){
			irwin[i/2] = arr[i];
		}
		else
			irwin[i/2] = arr[i + 1];
	}
	return irwin;
}
