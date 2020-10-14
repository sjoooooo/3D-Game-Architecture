#pragma once

#include "Object.h"

class SampleNonRenderObj : public NonRenderableObject
{
public:
	int idData;

public:
	virtual void shutDown() override {}
public:
	virtual void update() override {}
};