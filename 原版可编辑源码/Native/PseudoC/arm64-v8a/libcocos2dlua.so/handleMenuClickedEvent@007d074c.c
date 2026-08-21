
/* cocos2d::LuaEngine::handleMenuClickedEvent(void*) */

undefined4 __thiscall cocos2d::LuaEngine::handleMenuClickedEvent(LuaEngine *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ScriptHandlerMgr *pSVar3;
  long *plVar4;
  long *plVar5;
  
  if ((param_1 != (void *)0x0) && (plVar4 = *(long **)param_1, plVar4 != (long *)0x0)) {
    pSVar3 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
    iVar1 = ScriptHandlerMgr::getObjectHandler(pSVar3,plVar4,1);
    if (iVar1 != 0) {
      plVar5 = *(long **)(this + 8);
      uVar2 = (**(code **)(*plVar4 + 0x2b8))(plVar4);
      (**(code **)(*plVar5 + 0x60))(plVar5,uVar2);
      (**(code **)(**(long **)(this + 8) + 0x98))(*(long **)(this + 8),plVar4,"cc.MenuItem");
      uVar2 = (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),iVar1,2);
      (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
      return uVar2;
    }
  }
  return 0;
}

