
/* cocos2d::LuaEngine::removeScriptObjectByObject(cocos2d::Ref*) */

void __thiscall cocos2d::LuaEngine::removeScriptObjectByObject(LuaEngine *this,Ref *param_1)

{
  ScriptHandlerMgr *this_00;
  
  (**(code **)(**(long **)(this + 8) + 0x28))();
  this_00 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
  ScriptHandlerMgr::removeObjectAllHandlers(this_00,param_1);
  return;
}

