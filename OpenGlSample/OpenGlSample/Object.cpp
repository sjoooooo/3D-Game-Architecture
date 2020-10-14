#include "Object.h"

#include "include/GL/glew.h"
#include "include/GLFW/glfw3.h" 
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

// ���� �������� �� ���� ���� ������ �ּ�ó�� ����
//void Object::shutDown()
//{
//	// ���⿡ � �ڵ尡 �� ���� ����.
//	
//}

void RenderableObject::shutDown()
{
	// ���� Ŭ������ �˴ٿ ȣ������. �׷��� ���Ͱ� ���� Ŭ���� �˴ٿ ���� �� �� �ֱ� ����. ���� ���� ������ �ּ� ó��
	//Object::shutDown();

	// Cleanup VBO and shader
	glDeleteBuffers(1, &vertexbuffer);
	glDeleteBuffers(1, &uvbuffer);
	glDeleteBuffers(1, &normalbuffer);
	glDeleteProgram(programID);
	glDeleteTextures(1, &Texture);
	glDeleteVertexArrays(1, &VertexArrayID);
}

void NonRenderableObject::shutDown()
{

}