
/* cocos2d::Application::~Application() */

void __thiscall cocos2d::Application::~Application(Application *this)

{
  RenderTexture *this_00;
  
  *(undefined ***)this = &PTR__Application_01c66348;
  AudioEngine::end();
  EventDispatcher::destroy();
  se::ScriptEngine::destroyInstance();
  this_00 = *(RenderTexture **)(this + 0x18);
  if (this_00 != (RenderTexture *)0x0) {
    RenderTexture::~RenderTexture(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(this + 0x18) = 0;
  _instance = 0;
  operator_delete(this);
  return;
}

