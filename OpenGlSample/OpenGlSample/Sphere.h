#ifndef __SPHERE_H_
#define __SPHERE_H_

#include "Object.h"
#include "RenderableObject.h"

class Sphere : public RenderableObject
{

public:
	virtual void shutDown() override;

	// sphere ������ ������ �Ҹ�ó��.
	// Ư���� �Ҹ� ó�� �� ���� ���ٰ� �ص� �Ҹ�ó�� ������
};

#endif // !__SPHERE_H_