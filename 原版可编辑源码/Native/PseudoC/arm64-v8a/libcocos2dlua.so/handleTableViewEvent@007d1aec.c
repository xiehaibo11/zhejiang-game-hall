
/* cocos2d::LuaEngine::handleTableViewEvent(cocos2d::ScriptHandlerMgr::HandlerType, void*, int,
   std::__ndk1::function<void (lua_State*, int)> const&) */

undefined8 __thiscall
cocos2d::LuaEngine::handleTableViewEvent
          (LuaEngine *this,int param_2,long *param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  ScriptHandlerMgr *pSVar2;
  long *plVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar7;
  
  if ((((param_3 == (long *)0x0) || (param_4 < 1)) || (*param_3 == 0)) ||
     (puVar7 = (undefined8 *)param_3[1], puVar7 == (undefined8 *)0x0)) {
    return 0;
  }
  pSVar2 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
  iVar1 = ScriptHandlerMgr::getObjectHandler(pSVar2,*param_3,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  pvVar5 = (void *)*param_3;
  if (pvVar5 == (void *)0x0) {
    return 0;
  }
  if (param_2 == 0x1d) {
    toluafix_pushusertype_ccobject
              (*(lua_State **)(*(long *)(this + 8) + 0x28),*(int *)((long)pvVar5 + 0xc),
               (int *)((long)pvVar5 + 0x10),pvVar5,"cc.TableView");
    plVar3 = *(long **)(this + 8);
    uVar4 = 1;
  }
  else {
    if (param_2 != 0x1c) {
      if (param_2 != 0x1b) {
        return 0;
      }
      toluafix_pushusertype_ccobject
                (*(lua_State **)(*(long *)(this + 8) + 0x28),*(int *)((long)pvVar5 + 0xc),
                 (int *)((long)pvVar5 + 0x10),pvVar5,"cc.TableView");
      (**(code **)(**(long **)(this + 8) + 0x70))(*(long **)(this + 8),*(undefined8 *)*puVar7);
      plVar3 = *(long **)(this + 8);
      uVar4 = 2;
      uVar6 = 2;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0xd8);
      goto LAB_007d1c38;
    }
    toluafix_pushusertype_ccobject
              (*(lua_State **)(*(long *)(this + 8) + 0x28),*(int *)((long)pvVar5 + 0xc),
               (int *)((long)pvVar5 + 0x10),pvVar5,"cc.TableView");
    (**(code **)(**(long **)(this + 8) + 0x70))(*(long **)(this + 8),*(undefined8 *)*puVar7);
    plVar3 = *(long **)(this + 8);
    uVar4 = 2;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0xd8);
  uVar6 = 1;
LAB_007d1c38:
                    /* WARNING: Could not recover jumptable at 0x007d1c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)(plVar3,iVar1,uVar4,uVar6,param_5);
  return uVar4;
}

