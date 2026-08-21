
/* cocos2d::LuaEngine::handleEventTouches(cocos2d::ScriptHandlerMgr::HandlerType, void*) */

undefined4 __thiscall
cocos2d::LuaEngine::handleEventTouches(LuaEngine *this,undefined4 param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  ScriptHandlerMgr *pSVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if ((((param_3 != (long *)0x0) && (*param_3 != 0)) &&
      (plVar8 = (long *)param_3[1], plVar8 != (long *)0x0)) &&
     ((plVar8[3] != 0 && (plVar8[1] != *plVar8)))) {
    pSVar4 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
    iVar2 = ScriptHandlerMgr::getObjectHandler(pSVar4,*param_3,param_2);
    if (iVar2 != 0) {
      uVar6 = *(undefined8 *)(*(long *)(this + 8) + 0x28);
      lua_createtable(uVar6,0,0);
      puVar1 = (undefined8 *)plVar8[1];
      plVar5 = *(long **)(this + 8);
      if ((undefined8 *)*plVar8 != puVar1) {
        iVar7 = 1;
        puVar9 = (undefined8 *)*plVar8;
        do {
          (**(code **)(*plVar5 + 0x60))(plVar5,iVar7);
          puVar10 = puVar9 + 1;
          (**(code **)(**(long **)(this + 8) + 0x98))(*(long **)(this + 8),*puVar9,"cc.Touch");
          lua_rawset(uVar6,0xfffffffd);
          plVar5 = *(long **)(this + 8);
          iVar7 = iVar7 + 1;
          puVar9 = puVar10;
        } while (puVar1 != puVar10);
      }
      (**(code **)(*plVar5 + 0x98))(plVar5,plVar8[3],"cc.Event");
      uVar3 = (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),iVar2,2);
      (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
      return uVar3;
    }
  }
  return 0;
}

