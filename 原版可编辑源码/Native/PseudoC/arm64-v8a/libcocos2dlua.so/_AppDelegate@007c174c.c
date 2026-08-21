
/* AppDelegate::~AppDelegate() */

void __thiscall AppDelegate::~AppDelegate(AppDelegate *this)

{
  *(undefined ***)this = &PTR__AppDelegate_016979d8;
  cocos2d::experimental::AudioEngine::end();
  cocos2d::Application::~Application((Application *)this);
  return;
}

