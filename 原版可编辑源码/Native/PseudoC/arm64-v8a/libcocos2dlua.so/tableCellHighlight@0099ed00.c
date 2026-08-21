
/* non-virtual thunk to LUA_TableViewDelegate::tableCellHighlight(cocos2d::extension::TableView*,
   cocos2d::extension::TableViewCell*) */

void __thiscall
LUA_TableViewDelegate::tableCellHighlight
          (LUA_TableViewDelegate *this,TableView *param_1,TableViewCell *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ScriptHandlerMgr *pSVar5;
  long *plVar4;
  TableView *local_50;
  TableViewCell **local_48;
  TableViewCell *local_40;
  long local_38;
  
  uVar3 = SUB84(this,0);
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 != (TableView *)0x0) && (param_2 != (TableViewCell *)0x0)) {
    pSVar5._0_4_ = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    iVar2 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar5._0_4_,param_1,0x18);
    uVar3 = 0;
    if (iVar2 != 0) {
      local_48 = &local_40;
      local_50 = param_1;
      local_40 = param_2;
      plVar4 = (long *)cocos2d::LuaEngine::getInstance();
      uVar3 = (**(code **)(*plVar4 + 0x128))((int)plVar4,0x18,&local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

