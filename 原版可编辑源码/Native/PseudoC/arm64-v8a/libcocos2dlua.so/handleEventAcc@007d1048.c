
/* cocos2d::LuaEngine::handleEventAcc(void*) */

undefined4 __thiscall cocos2d::LuaEngine::handleEventAcc(LuaEngine *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ScriptHandlerMgr *pSVar3;
  void *pvVar4;
  lua_State *plVar5;
  long *plVar6;
  long lVar7;
  
  if (((param_1 != (void *)0x0) && (*(long *)param_1 != 0)) && (*(long *)((long)param_1 + 8) != 0))
  {
    pSVar3 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
    iVar1 = ScriptHandlerMgr::getObjectHandler(pSVar3,*(undefined8 *)param_1,0x24);
    if (iVar1 != 0) {
      plVar6 = *(long **)((long)param_1 + 8);
      pvVar4 = (void *)plVar6[1];
      plVar5 = *(lua_State **)(*(long *)(this + 8) + 0x28);
      toluafix_pushusertype_ccobject
                (plVar5,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,"cc.Event")
      ;
      lVar7 = *plVar6;
      lua_pushnumber(*(undefined8 *)(lVar7 + 0x28),plVar5);
      lua_pushnumber(*(undefined8 *)(lVar7 + 0x30),plVar5);
      lua_pushnumber(*(undefined8 *)(lVar7 + 0x38),plVar5);
      lua_pushnumber(*(undefined8 *)(lVar7 + 0x40),plVar5);
      uVar2 = (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),iVar1,5);
      (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
      return uVar2;
    }
  }
  return 0;
}

