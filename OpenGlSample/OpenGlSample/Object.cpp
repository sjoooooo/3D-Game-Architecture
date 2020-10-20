#include "Object.h"

#include "include/GL/glew.h"
#include "include/GLFW/glfw3.h" 
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

// 현재 기준으론 쓸 일이 없기 때문에 주석처리 해줌
//void Object::shutDown()
//{
//	// 여기에 어떤 코드가 들어갈 수도 있음.
//	
//}

void RenderableObject::shutDown()
{
	// 상위 클래스의 셧다운도 호출해줌. 그래야 내것과 상위 클래스 셧다운도 같이 될 수 있기 때문. 위와 같은 이유로 주석 처리
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