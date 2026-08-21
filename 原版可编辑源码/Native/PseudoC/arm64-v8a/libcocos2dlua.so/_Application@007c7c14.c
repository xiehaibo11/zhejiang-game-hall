
/* cocos2d::Application::~Application() */

void __thiscall cocos2d::Application::~Application(Application *this)

{
  sm_pSharedApplication = 0;
  *(undefined ***)this = &PTR__ApplicationProtocol_01697e38;
  PoolManager::destroyInstance();
  return;
}

