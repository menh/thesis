#include "stdafx.h"
#include "HEAD.h"

IMPLEMENT_DYNCREATE(CVertex, CObject);//IMPLEMENT_DYNCREATEͨ��DECLARE_DYNCREATE����ʹ��IMPLEMENT_DYNCREATE�꣬������CObject���������������ʱ�Զ�������
									
/**
*
* Description: default constructor
*
**/
CVertex::CVertex() {

}

/**
*
* Description: destructor
*
**/
CVertex::~CVertex() {

}

/**
*
* Description: assign ver to m_vertex
*
**/
CVertex::CVertex(VERTEX& ver) {
	m_vertex = ver;
}

IMPLEMENT_DYNCREATE(CSequence,CObject)

/**
*
* Description: default constructor
*
**/
CSequence::CSequence() {

}

/**
*
* Description: destructor
*
**/
CSequence::~CSequence(){

}
 
/**
*
* Description: assign ver to m_vertex
*
**/
CSequence::CSequence(SEQUENCE& sequ){
	m_sequence = sequ;
}

