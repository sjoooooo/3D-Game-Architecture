#define _CRT_SECURE_NO_WARNINGS

#pragma comment(lib, "OpenGL32.lib")
#pragma comment(lib, "lib-vc2017/glew32.lib")
#pragma comment(lib, "lib-vc2017/glfw3.lib")

#include "Object.h"
#include "FileManager.h"
#include "Renderer.h"
#include "RenderableObject.h"
#include "NonRenderableObject.h"
#include "Sphere.h"

int main()
{
	FileManager* filemgr = FileManager::instance();

	Renderer* renderer = Renderer::instance();
	renderer->init();

	RenderableObject* cube = new RenderableObject();

	cube->SetPosition(0.0f, 0.0f, 0.0f);

	filemgr->loadOBJs(
		cube,
		"cube.obj",
		"goldskin.BMP",
		"20161614_vs.shader",
		"20161614_fs.shader"
	);

	Sphere* sphere = new Sphere(filemgr);

	NonRenderableObject* non_render_obj = new NonRenderableObject();

	while (true)
	{
		renderer->render(cube);

		renderer->render(sphere);

	}

	renderer->shutDown();
	cube->shutDown();
	sphere->shutDown();

	//delete renderer;
	delete cube;
	delete sphere;
	
	return 0;
}