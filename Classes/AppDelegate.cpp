#include "AppDelegate.h"
#include "HelloWorldScene.h"
#include "LoadingScene.h"


USING_NS_CC;

AppDelegate::AppDelegate() {}

AppDelegate::~AppDelegate()
{
}

bool AppDelegate::applicationDidFinishLaunching() {
    // initialize director
    auto director = Director::getInstance();
   auto glview = GLView::create("Flappy Bird");
    glview->setFrameSize(1080, 1920);
    director->setOpenGLView(glview);
    //Size designSize = CCSizeMake(320, 480);
   // glview->setDesignResolutionSize(designSize.width, designSize.height, kResolutionShowAll);
    //director->setContentScaleFactor(glview->getFrameSize().width / designSize.width);
    director->setContentScaleFactor(frameSize.height/designResolutionSize.height);



   /* auto eglview = director->getOpenGLView();

    //director->setOpenGLView(eglView);

	//eglView->setDesignResolutionSize(288,512, ResolutionPolicy::EXACT_FIT);


    if(!eglview) {
           eglview = GLView::createWithRect("My Game", Rect(0,0,1280,720)); // set dimension here
           director->setOpenGLView(eglview);


       }*/

    // set the resource directory
    this->setResourceSearchResolution();
    // turn on display FPS
    director->setDisplayStats(true);

    // set FPS. the default value is 1.0/60 if you don't call this
    director->setAnimationInterval(1.0 / 60);

    // create a scene. it's an autorelease object
    auto scene = LoadingScene::create();

    // run
    director->runWithScene(scene);

    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
    Director::getInstance()->stopAnimation();

    // if you use SimpleAudioEngine, it must be pause
    // SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
    Director::getInstance()->startAnimation();

    // if you use SimpleAudioEngine, it must resume here
    // SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
}

void AppDelegate::setResourceSearchResolution()
{
    std::vector<std::string> paths;
	paths.push_back("fonts");
    paths.push_back("image");
    paths.push_back("sounds");
    FileUtils::getInstance()->setSearchResolutionsOrder(paths);
}
