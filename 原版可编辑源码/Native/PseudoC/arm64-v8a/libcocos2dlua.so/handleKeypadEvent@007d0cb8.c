
/* cocos2d::LuaEngine::handleKeypadEvent(void*) */

undefined4 __thiscall cocos2d::LuaEngine::handleKeypadEvent(LuaEngine *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ScriptHandlerMgr *pSVar3;
  long *plVar4;
  char *pcVar5;
  
  if ((param_1 == (void *)0x0) || (*(long *)((long)param_1 + 8) == 0)) {
    return 0;
  }
  pSVar3 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
  iVar1 = ScriptHandlerMgr::getObjectHandler(pSVar3,*(undefined8 *)((long)param_1 + 8),5);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)param_1 == 0x12) {
    plVar4 = *(long **)(this + 8);
    pcVar5 = "menuClicked";
  }
  else {
    if (*(int *)param_1 != 6) goto LAB_007d0d38;
    plVar4 = *(long **)(this + 8);
    pcVar5 = "backClicked";
  }
  (**(code **)(*plVar4 + 0x80))(plVar4,pcVar5);
LAB_007d0d38:
  uVar2 = (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),iVar1,1);
  (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
  return uVar2;
}

