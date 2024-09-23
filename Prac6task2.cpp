// Prac6task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <fstream>
#include <string>
#include <iomanip> 

#include "Constant.h"


using namespace std;

int main()
{
	// READS THE CHARGING FILE DEMANDS:
	ifstream fin;
	fin.open("C:\\Users\\61449\\source\\repos\\Prac6task2\\ChargingDemands.txt");
	string word;

	/* 
	RETURNS NAME OF CITY BASED ON THE ID.

	int destinationID = 1;
	cout << nameMap[destinationID];
	*/
	
	/*
	cout << setw(5) << vehicleId;
	cout << setw(20) << nameMap[destinationId];
	cout << setw(20) << capacityRange;
	cout << setw(20) << remainRange;
	*/
	cout << "Vehicle Id" << setw(20) << "Destination Id" << setw(20)
		<< "Capacity Range" << setw(20) << "Remaining Range" << endl;

	while (!fin.eof()) 
	{
		/*
		*  Gets an input and stores it in string and outputs input
		*  Whole line of input is outputted.
		string listed;
		cout << "your list: ";
		getline(cin, listed);
		cout << listed;
		*/
		//while (fin >> word) 
		//{
		//	//new string to store the modifie
		//	string modifiedWord;
		//	string city;

		//	for (char c : word) {
		//		modifiedWord += c; // Add the character to the modified string
		//		if (c == ',') {
		//			modifiedWord += ' '; // Add a space after each comma
		//		}
		//	}

		//	cout << modifiedWord << endl; // Output the modified string
		//}

		while (fin >> word) {
			int position = 0; // beginning

			int vehicleId;
			 //nameMap[destinationId];
			int capacityRange;
			int remainRange = word[1];
			//cout << remainRange;
			

			// finds each comma and inserts g npos is when the , is not found in the word it stops the loop
			while ((position = word.find(',', position)) != string::npos) {
				// Insert 'g' after the comma hence +1 
				word.insert(position + 1, "                 "); 
				position += 2; // Move past the newly inserted 'g' so the loop bypasses the find() limitation of finding only the first occurence
			}

			cout << word << endl; // Output the string
		}
			
		

		
		//word.insert(position+1, wording);
		
		cout << word << endl;
		
		
	}

	/*cout << "Vehicle Id" << setw(20) << "Destination Id" << setw(20)
		<< "Capacity Range" << setw(20) << "Remaining Range" << endl;*/
	
	fin.close();
	return 0;
}


