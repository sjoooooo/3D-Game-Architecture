#ifndef __NONRENDERABLEOBJECT_H__
#define __NONRENDERABLEOBJECT_H__
#include "Object.h"

class NonRenderableObject : public Object
{
public:

	virtual void shutDown() override;

};


#endif