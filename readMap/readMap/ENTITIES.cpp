#include "stdafx.h"
#include "ENTITIES.h"

Entities::Entities() {
	//this->commonData = new CommonData();
	this->specialData = new SpecialData();
}

/*void Entities::setCommonData(CommonData _commonData) {
	//this->commonData = new CommonData(_commonData);
	//this->commonData->id = _commonData.id;
	this->commonData->layer = _commonData.layer;
}*/

void Entities::setSpecialData(SpecialData _specialData) {
	this->specialData->line.p1.x = _specialData.line.p1.x;
	this->specialData->line.p1.y = _specialData.line.p1.y;
	this->specialData->line.p1.z = _specialData.line.p1.z;

	this->specialData->line.p2.x = _specialData.line.p2.x;
	this->specialData->line.p2.y = _specialData.line.p2.y;
	this->specialData->line.p2.z = _specialData.line.p2.z;
}