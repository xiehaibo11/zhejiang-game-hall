
/* cocos2d::ScriptEngineManager::setScriptEngine(cocos2d::ScriptEngineProtocol*) */

void __thiscall
cocos2d::ScriptEngineManager::setScriptEngine
          (ScriptEngineManager *this,ScriptEngineProtocol *param_1)

{
  ScriptEngineProtocol *pSVar1;
  
  pSVar1 = *(ScriptEngineProtocol **)this;
  if (pSVar1 != param_1) {
    if (pSVar1 != (ScriptEngineProtocol *)0x0) {
      (**(code **)(*(long *)pSVar1 + 8))();
      *(undefined8 *)this = 0;
    }
    *(ScriptEngineProtocol **)this = param_1;
  }
  return;
}

