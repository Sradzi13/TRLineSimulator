/*
 * OutputFile.cpp
 *
 *  Created on: Jul 8, 2015
 *      Author: sarahradzihovsky
 */

#include "OutputFile.h"
#include <vector>

OutputFile::OutputFile() {
}

OutputFile::~OutputFile() {
}

#include <iostream>
#include <fstream>
using namespace std;

//CSV file headers and opening of file
void outputData(vector <double> fingerPositions, vector <double> magnitudes, vector <double> phases){
	ofstream Pinch_Data;
	Pinch_Data.open ("TRLine_Pinch_Data.txt");
	Pinch_Data << "Finger Location, Reflection Coeff Magn, Reflection Coeff Phase.\n";
	Pinch_Data << fingerPositions << magnitudes << phases << "\n";
	Pinch_Data.close();
	if (!Pinch_Data) {
		cout << "Error opening file" << endl;
	}
}
