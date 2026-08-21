
/* cocos2d::ScriptEngineManager::~ScriptEngineManager() */

void __thiscall cocos2d::ScriptEngineManager::~ScriptEngineManager(ScriptEngineManager *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
    *(undefined8 *)this = 0;
  }
  return;
}

