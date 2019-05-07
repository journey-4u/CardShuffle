#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void Fisher_YatesOriginal(){

	int Cards[52];

	for(int i = 0; i < 52; i++){
		Cards[i] = i;
	}




	for(int i = 0; i < 52; i++){
		cout << Cards[i] << endl;
	}
}

void FirstAttempt(){

	int Cards[52];

	int swap;
	int r1;
	int r2;

	for(int i = 0; i < 52; i++){
		Cards[i] = i;
	}

	for(int i = 0; i < 100000;i++){

		r1 = rand() % 52;
		r2 = rand() % 52;

		swap = Cards[r1];
		Cards[r1] = Cards[r2];
		Cards[r2] = swap;


	}

	for(int i = 0; i < 52; i++){
		cout << Cards[i] << endl;
	}
}

void ShuffleTemplate(){

	int Cards[52];

	for(int i = 0; i < 52; i++){
		Cards[i] = i;
	}




	for(int i = 0; i < 52; i++){
		cout << Cards[i] << endl;
	}
}


int main()
{

	FirstAttempt();
    return 0;
}
