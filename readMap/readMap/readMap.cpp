/****************************************************
author:        menh
description:   ¶ÁÈ¡dxfÎÄ¼þ
date:		   2016-10-25
version:       1.0
*****************************************************/

#include "stdafx.h"
#include <iostream>
#include "ENTITIES.h"
#include <cstdio>;
#include <fstream>
#define STRLEN 60
void readFile();
void createEntities();
void createLineEntity();
int main()
{
	readFile();
    return 0;
}
void readFile() {
	char fileName[100];
	char suffix[6] = ".dxf";
	Entities entities[STRLEN];
	int lenIndex = 0;
	char c;
	int i = 0;

	cin >> fileName;
	ifstream in;
	in.open("test.txt");
	if (!in) {
		cerr << "Error Open File" << endl;
		return;
	}
	else {

		while (!in.eof()) {
			char code[10];
			char codeValue[10];
			in.getline(codeValue, 10);
			in.getline(code, 10);
			
			cout << "codeValue :" << codeValue << endl;
			cout << "code :" << code << endl;

			if (codeValue[0] == '2'&&strcmp(code, "ENTITIES") == 0) {
				
				while (strcmp(code, "ENDSEC")) {
					in.getline(code, 10);
					in.getline(codeValue, 10);
					while()
				}
				
			}
		}
		
	}
	cout << "finish" << endl;
	cin >> c;
}
void createLineEntity() {

}

