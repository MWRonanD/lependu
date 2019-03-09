// Pendu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
#include <random>
#include <list>
#include <string>
#include <string_view>

#include "FailureMsg.h"
#include "words.h"

list<int> indexWordsAlready;


void Show(string &s) {
	cout << s << endl;
}

 
 void SetRandom() {

}

int main()
{
	cout << "Trouvez les " << wordsSize << "  mot et vous viverez !)" << endl;
	

	//TODO : Mettre un rdm pour l'ordre des mots
	for (size_t i = 0; i < wordsSize-1; i++)
	{
		auto win = false;
		auto nbError = errorSize - 1;
		char proposition;
		string wordToFind = words[i];
		string str = string(wordToFind.length(), '-');
		cout << "Mot : " << endl;
		while (wordToFind != str)
		{
			//Show(wordToFind);
			Show(str);
			cin >> proposition;
			proposition = toupper(proposition);
			bool hasError = true;
			for (int i = 0; i < wordToFind.length(); i++)
			{
				if (wordToFind[i] == proposition)
				{
					str[i] = proposition;
					hasError = false;
				}
			}

			if (hasError)
			{
				cout << error[nbError] << endl;
				nbError--;
			}
			else
			{
				hasError = true;
			}
			if (nbError <= 0)
			{
				cout << "Raté ! :/ essaye encore ";
				break;
			}
			if (wordToFind == str)
			{
				cout << "Bravo !! encore ";
			}
		} 

		cout << "un nouveau ";
	}

}