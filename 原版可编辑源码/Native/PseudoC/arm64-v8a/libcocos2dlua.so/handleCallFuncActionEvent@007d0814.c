
/* cocos2d::LuaEngine::handleCallFuncActionEvent(void*) */

undefined4 __thiscall cocos2d::LuaEngine::handleCallFuncActionEvent(LuaEngine *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ScriptHandlerMgr *pSVar3;
  long lVar4;
  
  if ((param_1 != (void *)0x0) && (*(long *)param_1 != 0)) {
    pSVar3 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
    iVar1 = ScriptHandlerMgr::getObjectHandler(pSVar3,*(undefined8 *)param_1,2);
    if (iVar1 != 0) {
      lVar4 = *(long *)((long)param_1 + 8);
      if (lVar4 != 0) {
        (**(code **)(**(long **)(this + 8) + 0x98))(*(long **)(this + 8),lVar4,"cc.Node");
      }
      uVar2 = (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),iVar1,lVar4 != 0);
      (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
      return uVar2;
    }
  }
  return 0;
}

