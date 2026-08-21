
/* cocos2d::LuaEngine::handleEvenCustom(void*) */

undefined4 __thiscall cocos2d::LuaEngine::handleEvenCustom(LuaEngine *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ScriptHandlerMgr *pSVar3;
  void *pvVar4;
  
  if (((param_1 != (void *)0x0) && (*(long *)param_1 != 0)) &&
     (pvVar4 = *(void **)((long)param_1 + 8), pvVar4 != (void *)0x0)) {
    pSVar3 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
    iVar1 = ScriptHandlerMgr::getObjectHandler(pSVar3,*(undefined8 *)param_1,0x25);
    if (iVar1 != 0) {
      toluafix_pushusertype_ccobject
                (*(lua_State **)(*(long *)(this + 8) + 0x28),*(int *)((long)pvVar4 + 0xc),
                 (int *)((long)pvVar4 + 0x10),pvVar4,"cc.EventCustom");
      uVar2 = (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),iVar1,1);
      (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
      return uVar2;
    }
  }
  return 0;
}

