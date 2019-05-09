#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <vector>

using namespace std;

void ReadCards(vector <int> Cards){

    for(int i = 0; i< Cards.size(); i++){

        switch(Cards.at(i)) {

        case 0:
            cout << "The Ace of Spades" << endl;
            break;
        case 1:
             cout << "The 2 of Spades" << endl;
             break;
        case 2:
             cout << "The 3 of Spades" << endl;
             break;
        case 3:
             cout << "The 4 of Spades" << endl;
             break;
        case 4:
             cout << "The 5 of Spades" << endl;
             break;
        case 5:
             cout << "The 6 of Spades" << endl;
             break;
        case 6:
             cout << "The 7 of Spades" << endl;
             break;
        case 7:
            cout << "The 8 of Spades" << endl;
            break;
        case 8:
            cout << "The 9 of Spades" << endl;
            break;
        case 9:
             cout << "The 10 of Spades" << endl;
             break;
        case 10:
             cout << "The Jack of Spades" << endl;
             break;
        case 11:
             cout << "The Queen of Spades" << endl;
             break;
        case 12:
             cout << "The King of Spades" << endl;
             break;
        case 13:
             cout << "The Ace of Clubs" << endl;
             break;
        case 14:
             cout << "The 2 of Clubs" << endl;
             break;
        case 15:
             cout << "The 3 of Clubs" << endl;
             break;
        case 16:
             cout << "The 4 of Clubs" << endl;
             break;
        case 17:
            cout << "The 5 of Clubs" << endl;
            break;
        case 18:
             cout << "The 6 of Clubs" << endl;
             break;
        case 19:
             cout << "The 7 of Clubs" << endl;
             break;
        case 20:
             cout << "The 8 of Clubs" << endl;
             break;
        case 21:
             cout << "The 9 of Clubs" << endl;
             break;
        case 22:
             cout << "The 10 of Clubs" << endl;
             break;
        case 23:
             cout << "The Jack of Clubs" << endl;
             break;
        case 24:
             cout << "The Queen of Clubs" << endl;
             break;
        case 25:
             cout << "The King of Clubs" << endl;
             break;
        case 26:
             cout << "The Ace of Hearts" << endl;
             break;
        case 27:
             cout << "The 2 of Hearts" << endl;
             break;
        case 28:
             cout << "The 3 of Hearts" << endl;
             break;
        case 29:
             cout << "The 4 of Hearts" << endl;
             break;
        case 30:
             cout << "The 5 of Hearts" << endl;
             break;
        case 31:
             cout << "The 6 of Hearts" << endl;
             break;
        case 32:
            cout << "The 7 of Hearts" << endl;
            break;
        case 33:
             cout << "The 8 of Hearts" << endl;
             break;
        case 34:
             cout << "The 9 of Hearts" << endl;
             break;
        case 35:
             cout << "The 10 of Hearts" << endl;
             break;
        case 36:
             cout << "The Jack of Hearts" << endl;
             break;
        case 37:
             cout << "The Queen of Hearts" << endl;
             break;
        case 38:
             cout << "The King of Hearts" << endl;
             break;
        case 39:
             cout << "The Ace of Diamonds" << endl;
             break;
        case 40:
             cout << "The 2 of Diamonds" << endl;
             break;
        case 41:
             cout << "The 3 of Diamonds" << endl;
             break;
        case 42:
             cout << "The 4 of Diamonds" << endl;
             break;
        case 43:
            cout << "The 5 of Diamonds" << endl;
            break;
        case 44:
            cout << "The 6 of Diamonds" << endl;
            break;
        case 45:
            cout << "The 7 of Diamonds" << endl;
            break;
        case 46:
            cout << "The 8 of Diamonds" << endl;
            break;
        case 47:
            cout << "The 9 of Diamonds" << endl;
            break;
        case 48:
             cout << "The 10 of Diamonds" << endl;
             break;
        case 49:
            cout << "The Jack of Diamonds" << endl;
            break;
        case 50:
             cout << "The Queen of Diamonds" << endl;
             break;
        case 51:
             cout << "The King of Diamonds" << endl;
             break;

        }
    }

}

void Fisher_YatesOriginal(){

    srand (time(NULL));

	vector <int> UnshuffledCards;
	vector <int> ShuffledCards;

	for(int i = 0; i < 52; i++){
		UnshuffledCards.push_back(i);
	}

    while(!UnshuffledCards.empty()){
        int R = rand() % UnshuffledCards.size();
        ShuffledCards.push_back(UnshuffledCards[R]);
        UnshuffledCards.erase(UnshuffledCards.begin() + R);
        }

/*	for(int i = 0; i < ShuffledCards.size(); i++){
		cout << ShuffledCards[i] << endl;
	} */
	ReadCards(ShuffledCards);
}

void Fisher_YatesModern(){

    srand (time(NULL));

	vector <int> Cards;

	for(int i = 0; i < 52; i++){
		Cards.push_back(i);
	}

	for(int i = Cards.size() - 1; i > 0 ; i--){
        int R = rand() % Cards.size();
        int swap = Cards[R];
		Cards[R] = Cards[i];
		Cards[i] = swap;
	}


/*	for(int i = 0; i < Cards.size(); i++){
		cout << Cards[i] << endl;
	} */

	ReadCards(Cards);
}

void FirstAttempt(){

	vector <int> Cards;

	srand (time(NULL));

	int swap;
	int r1;
	int r2;

	for(int i = 0; i < 52; i++){
		Cards.push_back(i);
	}

	for(int i = 0; i < 1000000;i++){

		r1 = rand() % 52;
		r2 = rand() % 52;

		swap = Cards[r1];
		Cards[r1] = Cards[r2];
		Cards[r2] = swap;


	}

/*	for(int i = 0; i < 52; i++){
		cout << Cards[i] << endl;
	} */

	ReadCards(Cards);
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

	Fisher_YatesModern();
    return 0;
}
