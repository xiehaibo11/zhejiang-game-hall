
/* non-virtual thunk to LUA_TableViewDelegate::scrollViewDidZoom(cocos2d::extension::ScrollView*) */

void __thiscall
LUA_TableViewDelegate::scrollViewDidZoom(LUA_TableViewDelegate *this,ScrollView *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ScriptHandlerMgr *pSVar5;
  long *plVar4;
  ScrollView *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  long local_28;
  
  uVar3 = SUB84(this,0);
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 != (ScrollView *)0x0) {
    pSVar5._0_4_ = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    iVar2 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar5._0_4_,param_1,0x16);
    uVar3 = 0;
    if (iVar2 != 0) {
      local_38 = &local_30;
      local_30 = 0;
      local_40 = param_1;
      plVar4 = (long *)cocos2d::LuaEngine::getInstance();
      uVar3 = (**(code **)(*plVar4 + 0x128))((int)plVar4,0x16,&local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

