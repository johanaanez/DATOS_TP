/*
 * CVSReader.cpp
 *
 *  Created on: 8 de nov. de 2015
 *      Author: joha
 */

#include "CVSReader.h"

namespace std {

CVSReader::CVSReader() {
	this->colums = 0;
	this->rows = 0;
}

void CVSReader::open(string nameFile){

	string line, csvItem;
	ifstream myfile ("test.csv");

	if (myfile.is_open()) {

		while (getline(myfile,line)) {
			int nroItem = 0;
			istringstream myline(line);
			while(getline(myline, csvItem, ',')) {
				if (nroItem == 0){
					cout << csvItem << endl;
				}
				nroItem++;
			}

		}
		myfile.close();
	}
	cout << "OK" << endl;
}

void CVSReader::readLine(string line){

}

CVSReader::~CVSReader() {
	// TODO Auto-generated destructor stub
}



} /* namespace std */
