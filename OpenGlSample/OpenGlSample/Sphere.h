#ifndef __SPHERE_H_
#define __SPHERE_H_

#include "RenderableObject.h"
#include "FileManager.h"

class Sphere : public RenderableObject
{
public:
	Sphere(FileManager * filepath);

public:
	void SetSpherePosition(float x, float y, float z);

	virtual void shutDown() override;

};

#endif // !__SPHERE_H_