#ifndef __OBJECT_H__
#define __OBJECT_H__

#include <vector>

#include "ICleanUp.h"
#include "IUpdater.h"

#include "include/GL/glew.h"
#include "include/GLFW/glfw3.h" 
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

class Object : public ICleanUp
{

public:
	virtual void shutDown() override;

public:
	Object();
	virtual ~Object(){}

	void SetPosition(float x, float y, float z);

};

#endif