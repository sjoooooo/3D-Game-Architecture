#ifndef __SPHERE_H_
#define __SPHERE_H_

#include "Object.h"
#include "RenderableObject.h"

class Sphere : public RenderableObject
{

public:
	virtual void shutDown() override;

	// sphere 렌더링 데이터 소멸처리.
	// 특별히 소멸 처리 할 일이 없다고 해도 소멸처리 시켜줌
};

#endif // !__SPHERE_H_