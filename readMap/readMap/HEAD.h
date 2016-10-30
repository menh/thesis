
/****************************************************
author:        menh
description:   HEAD 头文件
date:		   2016-10-25
version:       1.0
*****************************************************/
//#pragma once

#ifndef HEAD_H_
#define HEAD_H_
#endif // !HEAD_H_

#include <afxcoll.h>


typedef struct {
	float x;
	float y;
	float z;
}VERTEX;//store point coordinates


typedef struct {
	int a;
	int b;
	int c;
}SEQUENCE;//store plane form

typedef struct {
	char obName[20];//
	CObArray Vertex;
	CObArray Sequence;
}myVertex;//store entity's name,point coordinate,and plane form

//因为CObArray类的对象中只能加入由CObject派生的对象，所以们还需要建立一个由CObject类派生的类
class CVertex :public CObject {
	protected:
		CVertex();
		DECLARE_DYNCREATE(CVertex)//使用DECLARE_DYNCREATE宏可以使每个CObject的派生类的对象具有运行时动态创建的能力。框架利用这种能力来动态创建对象，例如，当它在串行化过程中从磁盘读取对象的时候。文档、视图和框架类必须支持动态创建，因为框架需要动态地创建它们。
		virtual ~CVertex();

	//Attributes
	public:
		CVertex(VERTEX& ver);
		VERTEX m_vertex;
};

class CSequence :public CObject {
	protected:
		CSequence();
		DECLARE_DYNCREATE(CSequence)
		virtual ~CSequence();
	public:
		CSequence(SEQUENCE& sequ);
		SEQUENCE m_sequence;
};