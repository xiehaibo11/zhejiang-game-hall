
/* LUA_TableViewDataSource::tableCellSizeForIndex(cocos2d::extension::TableView*, long) */

void LUA_TableViewDataSource::tableCellSizeForIndex(TableView *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ScriptHandlerMgr *pSVar3;
  long *plVar4;
  Size *in_x8;
  code *pcVar5;
  undefined8 local_98;
  long lStack_90;
  undefined1 **local_88;
  undefined1 *local_80;
  undefined1 local_78 [8];
  undefined **local_70;
  undefined8 *puStack_68;
  long local_60;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0) {
    pSVar3 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    iVar2 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar3,param_2,0x1b);
    if (iVar2 != 0) {
      local_80 = local_78;
      local_88 = &local_80;
      local_98 = 0;
      lStack_90 = param_2;
      plVar4 = (long *)cocos2d::LuaEngine::getInstance();
      puStack_68 = &local_98;
      local_60 = (long)&local_98 + 4;
      local_70 = &PTR_FUN_0169e490;
      local_50 = &local_70;
      (**(code **)(*plVar4 + 0x130))(plVar4,0x1b,&lStack_90,2,&local_70);
      if (&local_70 == local_50) {
        pcVar5 = (code *)(*local_50)[4];
LAB_0099efa8:
        (*pcVar5)();
      }
      else if (local_50 != (undefined ***)0x0) {
        pcVar5 = (code *)(*local_50)[5];
        goto LAB_0099efa8;
      }
      cocos2d::Size::Size(in_x8,local_98._4_4_,(float)local_98);
      goto LAB_0099efb8;
    }
  }
  cocos2d::Size::Size(in_x8,(Size *)&cocos2d::Size::ZERO);
LAB_0099efb8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

