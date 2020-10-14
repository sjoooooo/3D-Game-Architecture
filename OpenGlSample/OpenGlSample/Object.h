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
// ���� �������� ������ ���� ������ �ּ� ó��
//public:
//	virtual void shutDown() override;

public:
	virtual ~Object(){}
};

class RenderableObject : public Object
{
public:
	GLuint VertexArrayID;
	GLuint programID;
	GLuint MatrixID;
	GLuint ViewMatrixID;
	GLuint ModelMatrixID;
	GLuint Texture;
	GLuint TextureID;

	std::vector<glm::vec3> vertices;
	std::vector<glm::vec2> uvs;
	std::vector<glm::vec3> normals;

	GLuint vertexbuffer;
	GLuint uvbuffer;
	GLuint normalbuffer;
	GLuint LightID;

public:
	virtual void shutDown() override;
};

class NonRenderableObject : public Object
{
public:
	virtual void shutDown() override;
};
#endif