/*
 * CVSReader.h
 *
 *  Created on: 8 de nov. de 2015
 *      Author: joha
 */

#ifndef CVSREADER_H_
#define CVSREADER_H_

#include <iostream>
#include <fstream>
#include <sstream>

#include <string>
#include <utility>
#include <functional>
#include <algorithm>
#include <cctype>
#include <stdio.h>

namespace std {

class CVSReader {

private:
	int rows;
	int colums;

public:
	CVSReader();

	void open(string nameFile);

	void readLine(string line);

	virtual ~CVSReader();
};

} /* namespace std */

#endif /* CVSREADER_H_ */
