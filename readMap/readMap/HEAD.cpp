#include "stdafx.h"
#include "HEAD.h"

IMPLEMENT_DYNCREATE(CVertex, CObject);//IMPLEMENT_DYNCREATE通过DECLARE_DYNCREATE宏来使用IMPLEMENT_DYNCREATE宏，以允许CObject派生类对象在运行时自动建立。
									
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

