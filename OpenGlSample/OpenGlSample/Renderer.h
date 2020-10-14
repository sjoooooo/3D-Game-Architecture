#ifndef __RENDERER_H__
#define __RENDERER_H__

#include "ICleanUp.h"
#include "IUpdater.h"
#include "IRenderer.h"

struct GLFWwindow;
class Object;

class Renderer : public ICleanUp
{
private:
	GLFWwindow* window;

public:
	static Renderer* instance()
	{
		static Renderer instance;

		return &instance;
	}

public:

	void render(RenderableObject* src_obj);
	//void update(IUpdater* src_obj);
	//void addObject(IRenderer* render_obj);

	void init();
	virtual void shutDown() override;
};

#endif // !__RENDERER_H__