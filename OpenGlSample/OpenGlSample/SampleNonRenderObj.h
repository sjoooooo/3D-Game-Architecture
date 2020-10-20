#pragma once

#include "Object.h"

class SampleNonRenderObj : public Object
{
public:
	int idData;

public:
	virtual void shutDown() override {}
public:
	//virtual void update() override {}
};