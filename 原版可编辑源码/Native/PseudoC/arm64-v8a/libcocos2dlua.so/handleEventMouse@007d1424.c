
/* cocos2d::LuaEngine::handleEventMouse(cocos2d::ScriptHandlerMgr::HandlerType, void*) */

undefined4 __thiscall
cocos2d::LuaEngine::handleEventMouse(LuaEngine *this,undefined4 param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ScriptHandlerMgr *pSVar3;
  long *plVar4;
  
  if ((((param_3 != (long *)0x0) && (*param_3 != 0)) &&
      (plVar4 = (long *)param_3[1], plVar4 != (long *)0x0)) && (*plVar4 != 0)) {
    pSVar3 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
    iVar1 = ScriptHandlerMgr::getObjectHandler(pSVar3,*param_3,param_2);
    if (iVar1 != 0) {
      (**(code **)(**(long **)(this + 8) + 0x98))(*(long **)(this + 8),*plVar4,"cc.Event");
      uVar2 = (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),iVar1,1);
      (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
      return uVar2;
    }
  }
  return 0;
}

