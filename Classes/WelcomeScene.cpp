#include "WelcomeScene.h"

WelcomeScene::WelcomeScene() {
}
;

WelcomeScene::~WelcomeScene() {
}
;

bool WelcomeScene::init() {
	int value = 0;
	bool bRet = false;
	do {
		CC_BREAK_IF(!Scene::init());
		auto _welcomeLayer = WelcomeLayer::create();
		//auto _welcomeLayer = StatusLayer::create();
		CC_BREAK_IF(!_welcomeLayer);
		this->addChild(_welcomeLayer);
		bRet = true;
	} while (0);
	CCLOG("Welcome Scene!");
	if (bRet) {
		value = 1;

	} else {
		value = 0;
	}
	CCLOG("%d", value);
	return bRet;
}
