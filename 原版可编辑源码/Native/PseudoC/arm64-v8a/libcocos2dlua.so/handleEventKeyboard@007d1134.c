
/* cocos2d::LuaEngine::handleEventKeyboard(cocos2d::ScriptHandlerMgr::HandlerType, void*) */

undefined4 __thiscall
cocos2d::LuaEngine::handleEventKeyboard(LuaEngine *this,undefined4 param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ScriptHandlerMgr *pSVar3;
  void *pvVar4;
  lua_State *plVar5;
  int *piVar6;
  
  if (((param_3 != (long *)0x0) && (*param_3 != 0)) &&
     (piVar6 = (int *)param_3[1], piVar6 != (int *)0x0)) {
    pSVar3 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
    iVar1 = ScriptHandlerMgr::getObjectHandler(pSVar3,*param_3,param_2);
    if (iVar1 != 0) {
      plVar5 = *(lua_State **)(*(long *)(this + 8) + 0x28);
      lua_pushinteger(plVar5,(long)*piVar6);
      pvVar4 = *(void **)(piVar6 + 2);
      toluafix_pushusertype_ccobject
                (plVar5,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,"cc.Event")
      ;
      uVar2 = (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),iVar1,2);
      (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
      return uVar2;
    }
  }
  return 0;
}

