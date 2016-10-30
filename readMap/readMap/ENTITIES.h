
/****************************************************
author:        menh
description:   HEAD ͷ�ļ�
date:		   2016-10-28
version:       1.0
*****************************************************/
//#pragma once
#ifndef ENTITIES_H_
#define ENTITIES_H_
#endif

#include <string>
using namespace std;

#define STRLEN 60
//#define DATASIZE sizeof(EntityData)

/*---store point coordinates---*/
typedef struct {
	float x;
	float y;
	float z;
}POINT;//store point coordinates


/*--------------------*/
typedef struct tagLine {
	POINT p1;
	POINT p2;
}LINE;//store Line

/*------------------------*/
typedef struct tagCircle {
	POINT center;
	float radius;
}CIRCLE;//store circle

/*-----------------------*/
struct SpecialData {
	LINE line;
	CIRCLE circle;
};//�������ݿ�

/*----------------------*/
struct CommonData {
	//char id[STRLEN];/*Entity Identifier*/
	string id;
	//char layer[STRLEN];/*Layer Name*/
	string layer;
};

class Entities {
	public:
		Entities();
		void setSpecialData(SpecialData _specialData);
		void setId(string id);
		string getId();
		SpecialData getSpecialData();
	private:
		string id;
		string layer;
		SpecialData *specialData;
};

