
/****************************************************
author:        menh
description:   HEAD ͷ�ļ�
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

//��ΪCObArray��Ķ�����ֻ�ܼ�����CObject�����Ķ��������ǻ���Ҫ����һ����CObject����������
class CVertex :public CObject {
	protected:
		CVertex();
		DECLARE_DYNCREATE(CVertex)//ʹ��DECLARE_DYNCREATE�����ʹÿ��CObject��������Ķ����������ʱ��̬�������������������������������̬�����������磬�����ڴ��л������дӴ��̶�ȡ�����ʱ���ĵ�����ͼ�Ϳ�������֧�ֶ�̬��������Ϊ�����Ҫ��̬�ش������ǡ�
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