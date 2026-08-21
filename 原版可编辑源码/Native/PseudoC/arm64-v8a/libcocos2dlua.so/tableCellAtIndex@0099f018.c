
/* LUA_TableViewDataSource::tableCellAtIndex(cocos2d::extension::TableView*, long) */

void __thiscall
LUA_TableViewDataSource::tableCellAtIndex
          (LUA_TableViewDataSource *this,TableView *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ScriptHandlerMgr *pSVar3;
  long *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 local_88;
  TableView *pTStack_80;
  long **local_78;
  long *local_70;
  long local_68;
  undefined **local_60;
  undefined8 *puStack_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_68 = param_2;
  if (param_1 != (TableView *)0x0) {
    pSVar3 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    iVar2 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar3,param_1,0x1c);
    if (iVar2 != 0) {
      local_70 = &local_68;
      local_78 = &local_70;
      local_88 = 0;
      pTStack_80 = param_1;
      plVar4 = (long *)cocos2d::LuaEngine::getInstance();
      puStack_58 = &local_88;
      local_60 = &PTR_FUN_0169e510;
      local_40 = &local_60;
      (**(code **)(*plVar4 + 0x130))(plVar4,0x1c,&pTStack_80,1,&local_60);
      if (&local_60 == local_40) {
        pcVar6 = (code *)(*local_40)[4];
      }
      else {
        uVar5 = local_88;
        if (local_40 == (undefined ***)0x0) goto LAB_0099f0d4;
        pcVar6 = (code *)(*local_40)[5];
      }
      (*pcVar6)();
      uVar5 = local_88;
      goto LAB_0099f0d4;
    }
  }
  uVar5 = 0;
LAB_0099f0d4:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

