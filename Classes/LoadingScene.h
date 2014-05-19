/*
 * LoadingScene.h
 *
 *  Created on: May 16, 2014
 *      Author: virtualrealitysystems
 */


#include "cocos2d.h"
#include "AtlasLoader.h"
#include "SimpleAudioEngine.h"
#include "HelloWorldScene.h"
#include "WelcomeScene.h"
#include "BackgroundLayer.h"

using namespace cocos2d;
using namespace CocosDenshion;

#ifndef LOADINGSCENE_H_
#define LOADINGSCENE_H_

class LoadingScene : public Scene {
public:
	/**
	     *  The default constructor.
	     */
		LoadingScene();

		~LoadingScene();
		//static cocos2d::Scene* createScene();
		//static void createScene();
		/**
	     *  Initializes the instance of AtlasLoader.
	     *
	     *  @note When you are porting Cocos2d-x to a new platform, you may need to take care of this method.
	     *
	     *  @return true if successed, otherwise it returns false.
	     *
	     */
		virtual bool init();

		CREATE_FUNC(LoadingScene);

		/**
	     * When this scene appear ,will call this method,
	     * not this scene is create, so if you have some thing
	     * want do when scen appear not init, please add to here
	     */
		void onEnter() override;

	private:
		/**
	     * Called when the texture (exp. atlas.png) is loading finish, will call this function
	     * this function finish build all the SpritFrame by using AtlasLoader
	     */
		void loadingCallBack(Texture2D *texture);
		LoadingScene *loadMe;
	};
#endif /* LOADINGSCENE_H_ */
