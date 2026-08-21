
/* cocos2d::ScriptEngineManager::removeScriptEngine() */

void __thiscall cocos2d::ScriptEngineManager::removeScriptEngine(ScriptEngineManager *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
    *(undefined8 *)this = 0;
  }
  return;
}

