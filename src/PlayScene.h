#pragma once
#ifndef __PLAY_SCENE__
#define __PLAY_SCENE__

#include "Scene.h"
#include "Button.h"
#include "Label.h"
#include "Obstacle.h"
#include "ship.h"
#include "SpaceShip.h"
#include "Target.h"

class PlayScene : public Scene
{
public:
	PlayScene();
	~PlayScene();

	// Scene LifeCycle Functions
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
	virtual void handleEvents() override;
	virtual void start() override;

private:
	// IMGUI Function
	void GUI_Function();
	std::string m_guiTitle;
	glm::vec2 m_mousePosition;
	bool m_isGridEnabled;
	void CheckshipLOS(DisplayObject* TargetObject);

	Target* m_pTarget;
	Ship* m_pShip;

	Obstacle* m_pObbstacle1;
	Obstacle* m_pObbstacle2;
	Obstacle* m_pObbstacle3;
};



#endif /* defined (__PLAY_SCENE__) */
