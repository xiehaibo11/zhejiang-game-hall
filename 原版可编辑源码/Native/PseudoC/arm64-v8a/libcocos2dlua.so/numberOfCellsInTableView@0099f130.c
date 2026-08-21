
/* LUA_TableViewDataSource::numberOfCellsInTableView(cocos2d::extension::TableView*) */

void __thiscall
LUA_TableViewDataSource::numberOfCellsInTableView(LUA_TableViewDataSource *this,TableView *param_1)

{
  long lVar1;
  int iVar2;
  ScriptHandlerMgr *pSVar3;
  long *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 local_80;
  TableView *pTStack_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined **local_60;
  undefined1 *puStack_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 != (TableView *)0x0) {
    pSVar3 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    iVar2 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar3,param_1,0x1d);
    if (iVar2 != 0) {
      local_70 = &local_68;
      local_68 = 0;
      local_80 = 0;
      pTStack_78 = param_1;
      plVar4 = (long *)cocos2d::LuaEngine::getInstance();
      local_60 = &PTR_FUN_0169e590;
      puStack_58 = (undefined1 *)&local_80;
      local_40 = &local_60;
      (**(code **)(*plVar4 + 0x130))(plVar4,0x1d,&pTStack_78,1,&local_60);
      if (&local_60 == local_40) {
        pcVar6 = (code *)(*local_40)[4];
      }
      else {
        uVar5 = local_80;
        if (local_40 == (undefined ***)0x0) goto LAB_0099f1e4;
        pcVar6 = (code *)(*local_40)[5];
      }
      (*pcVar6)();
      uVar5 = local_80;
      goto LAB_0099f1e4;
    }
  }
  uVar5 = 0;
LAB_0099f1e4:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

