
/* cocos2d::LuaEngine::handleAssetsManagerEvent(cocos2d::ScriptHandlerMgr::HandlerType, void*) */

undefined8 __thiscall
cocos2d::LuaEngine::handleAssetsManagerEvent(LuaEngine *this,int param_2,long *param_3)

{
  int iVar1;
  ScriptHandlerMgr *pSVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  if (((param_3 == (long *)0x0) || (*param_3 == 0)) ||
     (puVar5 = (undefined4 *)param_3[1], puVar5 == (undefined4 *)0x0)) {
    return 0;
  }
  pSVar2 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
  iVar1 = ScriptHandlerMgr::getObjectHandler(pSVar2,*param_3,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 != 0x21) {
    if (param_2 == 0x20) {
      plVar3 = *(long **)(this + 8);
      uVar4 = 0;
      goto LAB_007d1928;
    }
    if (param_2 != 0x1f) {
      return 0;
    }
  }
  (**(code **)(**(long **)(this + 8) + 0x60))(*(long **)(this + 8),*puVar5);
  plVar3 = *(long **)(this + 8);
  uVar4 = 1;
LAB_007d1928:
                    /* WARNING: Could not recover jumptable at 0x007d193c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar3 + 200))(plVar3,iVar1,uVar4);
  return uVar4;
}

