#ifndef __SPHERE_H_
#define __SPHERE_H_

<<<<<<< HEAD
#include "RenderableObject.h"
#include "FileManager.h"
=======
#include "Object.h"
>>>>>>> parent of de0f6b8... 7 - 1 수정

class Sphere : public RenderableObject
{
public:
	Sphere(FileManager * filepath);

public:
	void SetSpherePosition(float x, float y, float z);

	virtual void shutDown() override;

};

#endif // !__SPHERE_H_