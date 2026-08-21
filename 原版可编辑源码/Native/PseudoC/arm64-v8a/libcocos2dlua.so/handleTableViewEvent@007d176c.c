
/* cocos2d::LuaEngine::handleTableViewEvent(cocos2d::ScriptHandlerMgr::HandlerType, void*) */

undefined8 __thiscall
cocos2d::LuaEngine::handleTableViewEvent(LuaEngine *this,int param_2,long *param_3)

{
  int iVar1;
  ScriptHandlerMgr *pSVar2;
  long *plVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  
  if (((param_3 != (long *)0x0) && (*param_3 != 0)) &&
     (puVar7 = (undefined8 *)param_3[1], puVar7 != (undefined8 *)0x0)) {
    pSVar2 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
    iVar1 = ScriptHandlerMgr::getObjectHandler(pSVar2,*param_3,param_2);
    if ((iVar1 != 0) && (pvVar5 = (void *)*param_3, pvVar5 != (void *)0x0)) {
      if (param_2 - 0x17U < 4) {
        pvVar6 = (void *)*puVar7;
        if (pvVar6 == (void *)0x0) {
          return 0;
        }
        toluafix_pushusertype_ccobject
                  (*(lua_State **)(*(long *)(this + 8) + 0x28),*(int *)((long)pvVar5 + 0xc),
                   (int *)((long)pvVar5 + 0x10),pvVar5,"cc.TableView");
        toluafix_pushusertype_ccobject
                  (*(lua_State **)(*(long *)(this + 8) + 0x28),*(int *)((long)pvVar6 + 0xc),
                   (int *)((long)pvVar6 + 0x10),pvVar6,"cc.TableViewCell");
        plVar3 = *(long **)(this + 8);
        uVar4 = 2;
      }
      else {
        if (1 < param_2 - 0x15U) {
          return 0;
        }
        toluafix_pushusertype_ccobject
                  (*(lua_State **)(*(long *)(this + 8) + 0x28),*(int *)((long)pvVar5 + 0xc),
                   (int *)((long)pvVar5 + 0x10),pvVar5,"cc.TableView");
        plVar3 = *(long **)(this + 8);
        uVar4 = 1;
      }
                    /* WARNING: Could not recover jumptable at 0x007d1868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar3 + 200))(plVar3,iVar1,uVar4);
      return uVar4;
    }
  }
  return 0;
}

