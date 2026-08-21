
/* cocos2d::LuaEngine::handleEventTouch(cocos2d::ScriptHandlerMgr::HandlerType, void*) */

undefined4 __thiscall
cocos2d::LuaEngine::handleEventTouch(LuaEngine *this,undefined4 param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ScriptHandlerMgr *pSVar3;
  long *plVar4;
  
  if ((((param_3 == (long *)0x0) || (*param_3 == 0)) ||
      (plVar4 = (long *)param_3[1], plVar4 == (long *)0x0)) || ((*plVar4 == 0 || (plVar4[1] == 0))))
  {
    uVar2 = 0;
  }
  else {
    pSVar3 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
    iVar1 = ScriptHandlerMgr::getObjectHandler(pSVar3,*param_3,param_2);
    uVar2 = 0;
    if (iVar1 != 0) {
      if (*plVar4 == 0) {
        uVar2 = 0;
      }
      else {
        (**(code **)(**(long **)(this + 8) + 0x98))(*(long **)(this + 8),*plVar4,"cc.Touch");
        (**(code **)(**(long **)(this + 8) + 0x98))(*(long **)(this + 8),plVar4[1],"cc.Event");
        uVar2 = (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),iVar1,2);
      }
      (**(code **)(**(long **)(this + 8) + 0x58))();
    }
  }
  return uVar2;
}

